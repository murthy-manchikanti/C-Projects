#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a = 1;
    double b = -5;
    double c = 6;

    double root1 = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);
    double root2 = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a);

    cout << "The solution for x in x^2 - 5x + 6 is: ";
    cout << root1 << ", " << root2 << endl;
}