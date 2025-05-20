// Create a base class Shape.Derive two classes : \
// -Circle – to calculate area of a circle
// - Rectangle – to calculate area of a
#include <iostream>
using namespace std;
class Shape
{
    protected:
        float radius;
        float length;
        float breadth;
    public:
        void setCircle()
        {
            cout << "enter the radius of circle: " ;
            cin >> radius;

        }
        void setRectangle()
        {
            cout << "enter the length of rectangle: ";
            cin >> length;
            cout << "enter the breadth of rectangle: " ;
            cin >> breadth;
        }


};
class Circle : public Shape{
    public:

    void showcircle()
    {
        float area = 3.14 * radius * radius;
        cout << "Area of circle is : " << area << endl;
    }
};
class Rectangle : public Shape{
    public:
        void showrectangle()
        {
            float area = length * breadth;
            cout << "Area of rectangle is : " << area << endl;
        }
};
int main()
{
    Circle c;
    c.setCircle();
    c.showcircle();
    Rectangle r;
    r.setRectangle();
    r.showrectangle();
    return 0;
}