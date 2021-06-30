/**
 * Program to do binary search in C.
 * @name Anish Shobith P S.
 * @USN 4SO20CS012
 */

#include <stdio.h>

int main()
{
    int n, a[100], i , ele, loc = -1;

    printf("Enter the size of the array : ");
    scanf("%d", &n);
    printf("Enter the elements into the array : ");
    
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    
    printf("Enter the element to be searched : ");
    scanf("%d", &ele);

    int mid, high = n - 1, low = 0;

    while (low <= high)
    {
        mid = (low + high) / 2;
        if (ele == a[mid])
        {
            loc = mid;
            break;
        } else if (ele < a[mid])
        {
            high = mid - 1;
        } else
        {
            low = mid + 1;
        }
    }

    if (loc == -1)
    {
        printf("Element %d not found\n", ele);
    } else
    {
        printf("Element %d is found at the location = %d\n", ele, loc + 1);
    }

    return 0;
}