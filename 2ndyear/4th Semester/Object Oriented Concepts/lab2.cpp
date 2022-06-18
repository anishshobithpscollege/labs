/**
 * Write a program to find the factorial of a given number using function.
 */
#include <iostream>

int factorial(int n) {
    if (n == 1 || n == 0)
        return 1;
    else
        return (n * factorial(n - 1));
}

int main()
{
    int n;
    std::cout<<"Enter the value for n : ";
    std::cin>>n;
    
    std::cout<<"Factorial of "<<n<<" is : "<<factorial(n);

    return 0;
}