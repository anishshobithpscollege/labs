/**
 * Write a program to intialize variables using parameterized constructors and calculate
 * the area of rectangle (consider the local variables and instance variables to share the same name,
 * find the soultion to the problem encountered when both share the same name).
 *
 * Soultion: Reffering back to class using this keyword.
 * 
 */
#include <iostream>

class Rectangle
{
    private:
        float length, breadth, area;
    public:
        Rectangle(float length, float breadth)
        {
            this->length = length;
            this->breadth = breadth;
        }
        
        float area_of_rectangle() {
            area = length * breadth;
            return area;
        }
};

int main()
{  
   float length, breadth;
   std::cout<<"Enter the length of the rectangle : ";
   std::cin>>length;
   std::cout<<"Enter the breadth of the rectangle : ";
   std::cin>>breadth;
   Rectangle R(length, breadth);
   std::cout<<"Area of rectangle is : "<<R.area_of_rectangle();

    return 0;
}