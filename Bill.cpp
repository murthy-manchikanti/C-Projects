#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double mealCost = 29.12;
    double tax = static_cast <double> (mealCost * static_cast <double> (8.25) / static_cast <double> (100));
    double tip = double (int ((mealCost + tax) * double (15) ) / double(100));
    double total = mealCost + tax + tip;
    char unit = '$';

    cout << "Meal cost: " << unit << mealCost << endl;
    cout << "Tax: " << unit << tax << endl;
    cout << "Tip: " << unit << tip << endl;
    cout << "Total: " << unit << total << endl;
}