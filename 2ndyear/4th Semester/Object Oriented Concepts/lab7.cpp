/**
 * Program to initialize using parameterized constructors and calculate the area of the circle.
 */
#include <iostream>

class Circle
{
    private:
        float radius, area;
    public:
        Circle(float r)
        {
            radius = r;   
        }
    
        float area_of_circle() {
            area = (3.14 * radius * radius);
            return area;
        }
};




int main()
{
    float r;
    std::cout<<"Enter the radius of the circle :";
    std::cin>>r;
    Circle C(r);
    std::cout<<"Area of the circle is :"<<C.area_of_circle();
    return 0;
}