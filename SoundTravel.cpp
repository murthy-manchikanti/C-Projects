#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const double CarbonDioxide = 258.0;
const double Air = 331.5;
const double Helium = 972.0;
const double Hydrogen = 1270.0;
unsigned int userOption;
double calculatedDistance(double);
double seconds;
double Distance;

int main()
{
    cout << "\tAmount of distance can a sound travel through a Medium" << endl;
    cout << endl;

    cout << "1 - Carbon Dioxide" << endl;
    cout << "2 - Air" << endl;
    cout << "3 - Helium" << endl;
    cout << "4 - Hydrogen" << endl;
    cout << endl;

    cout << "Enter the number of the medium: ";
    cin >> userOption;

    if (userOption <= 0 || userOption >= 5)
    {
        cout << "\nError, invalid medium!" << endl;
        cout << "Please run the program again." << endl;
        return 0;
    }
    cout << "Enter the seconds it travelled (in s): ";
    cin >> seconds;
    if (seconds <= 0)
    {
        cout << "\nInput error! Seconds must be greater than zero." << endl;
        return 0;
    }
    cout << endl;
    calculatedDistance(seconds);
}

double calculatedDistance(double seconds)
{
    if (seconds >= 0 && seconds <= 30)
    switch (userOption)
    {
        case 1:
            Distance = seconds * CarbonDioxide;
            cout << "In Carbon Dioxide it will travel " << fixed << setprecision(2) << Distance << "m in ";
            cout << fixed << setprecision(1) << seconds <<  " seconds." << endl;
            break;
        case 2:
            Distance = seconds * Air;
            cout << "In Air it will travel " << fixed << setprecision(2) << Distance << "m in ";
            cout << fixed << setprecision(1) << seconds <<  " seconds." << endl;
            break;
        case 3:
            Distance = seconds * Helium;
            cout << "In Helium it will travel " << fixed << setprecision(2) << Distance << "m in ";
            cout << fixed << setprecision(1) << seconds <<  " seconds." << endl;
            break;
        case 4:
            Distance = seconds * Hydrogen;
            cout << "In Hydrogen it will travel " << fixed << setprecision(2) << Distance << "m in ";
            cout << fixed << setprecision(1) << seconds <<  " seconds." << endl;
            break;
    }
    else
    {
        cout << "Error! enter the number for seconds between 0 and 30." << endl;
    }
    return 0;
}