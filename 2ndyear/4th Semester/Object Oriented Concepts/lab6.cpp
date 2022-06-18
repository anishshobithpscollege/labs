/**
 * Was asked to type it out.
 */
#include<iostream>

class A
{

    public:
            int b;
        void display()
        {
            b = 1;
            std::cout<<b;
        }
};

int main()
{
    A a;
    a.display();
    std::cout<<std::endl<<a.b;
}