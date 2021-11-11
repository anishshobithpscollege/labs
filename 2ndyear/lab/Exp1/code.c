/**
 * Experiment - 1
 * 
 * Date: 25-10-2021
 * 
 * @AUTHOR     - Anish Shobith P S
 * @USN        - 4SO20CS012
 * @SUBJECT    - Data Structures Laboratory
 * @DEPARTMENT - Computer Science and Engineering
 * 
 * Question :
 * Design, Develop and Implement a menu driven Program in C for the following Array operations.
 *  a. Creating an Arrat of N Integer Elements.
 *  b. Display of Array Elements with Suitable Headings.
 *  c. Inserting an Element at given valid Position.
 *  d. Deleting an Element at a given valid Position.
 * Support the program with functions for each of the above operations.
 * 
 * Legends :
 *  Element = ELE
 *  Position = POS
 */
 
 #include <stdio.h>
 
 int a[20], n, i, ele, pos;
 
 void create();
 void display();
 void insert();
 void delete();
 
 void main()
 {
     int choice;
     
     while (1)
     {
         printf("\n");
         printf("*****MENU*****");
         printf("1. Create\n2. Display\n3. Insert\n4. Delete 5. Exit");
         scanf("%d", &choice);
     
         
         switch(choice)
         {
             case 1: create();
                     break;
            
             case 2: display();
                     break;
            
             case 3: insert();
                     break;
            
             case 4: delete();
                     break;
                     
             case 5: exit(0);
                     break;
                     
             default: printf("\nInvalid Choice\n");
                      break;
         }
     }
 }

/**
 * Creates a Array (A) of size (N).
 * 
 * Algorithm:
 *  Setp 1 : SET N, size of the Array (A)
 * 
 *  Setp 2 : FOR I = 0 to I < N
 *              READ A[I]
 *           ENDFOR
 * 
 *  Setp 3 : EXIT
 */
void create()
{
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    
    printf("Enter the array elements : ");
        for (i = 0; i < n; i++)
            scanf("%d", a[i]);
}

/**
 * Display's elements in the Array (A).
 * 
 * Algorithm:
 *  Setp 1 : FOR I = 0 to I < N
 *              PRINT A[I]
 *           ENDFOR
 * 
 *  Setp 2 : EXIT
 */
void display()
{
    printf("\n The Array elements are : ");
        for (i = 0; i < n; i++)
            printf("%d ", a[i]);
    
}

/**
 * Insert's Element (ELE) into the Array (A).
 * 
 * Algorithm:
 *  Step 1 : SET POS
 * 
 *  Setp 2 : IF POS >= N + 1
 *              PRINT "Insertion is not possible."
 *           ELSE
 *           { 
 *              SET ELE
 *              FOR I = N - 1 to  I >= POS
 *                  A[N + 1] = A[I]
 *              ENDFOR
 *              A[I + 1] = A[I]
 *              A[POS] = ELE
 *              N = N + 1
 *           }
 * 
 *  Setp 3 : EXIT
 * 
 */ 
void insert()
{
    printf("\n);
}
 
 
