#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double radius;
    double height;
    const double pi = 3.14159;
    double volume;

    cout << "What is the radius of the cylinder: ";
    cin >> radius;

    cout << "What is the height of the cylinder: ";
    cin >> height;

    volume = pi * pow(radius, 2) * height;

    cout << "The volume of the cylinder with radius " << radius << " and height " << height << " is ";
    cout << fixed << setprecision(3) << volume << endl;


}