#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float diameter;
    cout << "Enter the diameter: ";
    cin >> diameter;

    float radius = diameter / 2;

    double PI = 3.14;
    double areaDefined = 3.14 * radius * radius;

    double pi = double ((int (M_PI * 100) / double(100)));
    double area = pi * (pow(radius, 2.0));

    cout << "The radius is: " << radius << endl;
    cout << "Area of the given diameter using manual calculation: " << areaDefined << endl;
    cout << "Area of the given diameter using cmath is: " << area << endl;

    return 0;
}