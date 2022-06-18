/**
 * Write a program to intialize variables i.e length, breadth using zero parameter constructor
 * and calculate the area of rectangle and display the area.
 */
#include <iostream>

class Rectangle
{
    public:
        Rectangle()
    {
        length = 5;
        breadth = 6;
        area = length * breadth;
    }
    
    private:
        float area;
        float length;
    
    public:
        void display();
};

void Rectangle::display()
{
    std::cout<<"Area of rectangle : "<<area;
}

int main()
{
    Rectangle R;
    R.display();
    return 0;
}