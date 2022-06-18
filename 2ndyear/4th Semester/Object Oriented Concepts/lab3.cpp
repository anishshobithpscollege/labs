/**
 * Write a progra, to read three IA marks from console and 
 * find the average of best two marks.
 */
#include <iostream>

int main()
{
    int m1, m2, m3;
    int total = 0;
    float avg = 0;
    std::cout<<"Enter three IA marks : ";
    std::cin>>m1>>m2>>m3;
    
    avg = (m1 + m2 + m3) / 2;
    
    if (m1 < m2 && m1 < m3)
        avg = avg - (m1/2);
    else if (m2 < m1 && m2 < m3)
        avg = avg - (m2/2);
    else
        avg = avg - (m3/2);
    std::cout<<"Average of best of two is : "<<avg;
    return 0;
}