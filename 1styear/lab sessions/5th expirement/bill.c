/**
 * A c program to calculate electricity bill.
 * @name Anish Shobith
 * @USN 4SO20CS012
 */

// An electricity board charges the following rates for the use of electricity: for the first
// 200 units 80 paise per unit, for the next 100 hundred units 90 paise per unit; beyond 300
// units, rupee 1 per unit. All users are charged a minimum of Rs. 100 as meter charge. If the
// total amount is more than Rs 400, then an additional surcharge of 15% of total amount is
// charged. Write a program to read the name of the user, number of units consumed and
// print out the charges.

// Header files
#include <stdio.h>

/**
 * Main function
 * Start of main function
 */ 
int main()
{
    // Declare variables
    char name[100];
    int units;
    float cost;

    // Input name
    printf("\nEnter your name : ");
    gets(name);
    // Input number of units consumed
    printf("\nEnter the amount of units consumed : ");
    scanf("%d", &units);

    // If units consumed is 0, then the cost will be 100/-
    if (units == 0)
    {
        cost = 100;
    }
    // else if units is less than or equal to 200, then 100 + (units consumed * 0.8) 
    else if (units <= 200)
    {
        cost = 100 + (units * 0.8);
    }
    // else if units is lesds than or equal to 300, then 100 + (200 * 0.8) + ((units consumed - 200) * 0.8) 
    else if (units <= 300)
    {
        cost = 100 + (200 * 0.8) + ((units - 200) * 0.9);
    } 
    /*
     * else units is greater than strictly greater than 300 i.e from 301 ,
     * Then, 100 + ((200 * 0.8) + (100 * 0.9) + ((units - 300) * 1))
     */
    else
    {
        cost = 100 + ((200 * 0.8) + (100 * 0.9) + ((units - 300) * 1));
    }

    /*
    * If the cost of bill is above 400/-,
    * then, cost = cost + (cost * 0.15)
    * or, cost += cost * 0.15
    * Here cost refers to the cost calclated above 
    */ 
    if (cost > 400)
    {
        cost += cost * 0.15;
    }

    // Print the name and the cost of eletricity bill
    printf("\n\tName: %s\n\tCost: %.2f/-\n", name, cost);
    

    // We return 0, to show that program as executed successfully.
    return 0;
}
// End o main function