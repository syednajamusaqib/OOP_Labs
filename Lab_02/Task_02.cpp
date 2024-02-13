#include <iostream>
#include <vector>
#include <string>
using namespace std;

double numberValidation(double number)
{
    bool validInput = false;
    while (!validInput)
    {
        if (cin >> number)
        {
            if (number < 0.0)
            {
                cout << "Enter valid radius of Circle (>=0): " << endl;
            }
            else
            {
                validInput = true;
            }
        }
        else
        {
            cin.clear();
            while (cin.get() != '\n');
            cout << "Invalid input. Please enter a valid number." << endl;
        }
    }
    return number;
}

class Circle{
    double radius;
    const double pi = 3.14159;
    public:

    Circle(){
        radius = 0.0;
    }

    Circle(double radius){
        this -> radius = radius;
    }

    void setRadius(double radius){
        this -> radius = radius;
    }

    double getRadius()const{
        return radius;
    }

    double getArea()const{
        return (radius * radius) * pi;
    }

    double getDiameter()const{
        return radius * 2;
    }

    double getCircumference()const{
        return 2 * pi * radius;
    }

};


int main() {
    cout << "Enter Radius of Circle" << endl;
    double radius = numberValidation(radius);

    cout << radius << endl;

    Circle C1(radius);

    cout << "Area of circle is " << C1.getArea() << endl;
    cout << "Diameter of circle is " << C1.getDiameter() << endl;
    cout << "Circumference of circle is " << C1.getCircumference() << endl;
        
    return 0;
}