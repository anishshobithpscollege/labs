/**
 * Write a program to find the area of square and rectangle using two different
 * functions and use length as common attribute.
 */
#include <iostream>

int area_of_square(int n)
{
    return n * n;    
}

int area_of_rectangle(int l, int b)
{
    return (l * b);
}

int main()
{
    int length, breadth;
    std::cout<<"Enter the length for square and rectangle : ";
    std::cin>>length;
    std::cout<<"Enter the breadth for the rectangle : ";
    std::cin>>breadth;
    
    std::cout<<"Area of square is : "<<area_of_square(length)<<"\nArea of rectangle : "<<area_of_rectangle(length, breadth);

    return 0;
}