#include <iostream>
using namespace std;

int main() 
{
    double speedOfVehicle;
    int hoursTravelled;

    cout << "What is the speed of the vehicle in mph? ";
    cin >> speedOfVehicle;
    if (speedOfVehicle < 0) 
    {
        cout << "Speed cannot be negative. Please enter a valid speed: ";
        cin >> speedOfVehicle;
    }
    cout << "How many hours has it traveled? ";
    cin >> hoursTravelled;
    if (hoursTravelled < 1) 
    {
        cout << "Hours must be at least 1. Please enter a valid number of hours: ";
        cin >> hoursTravelled;
    }
    cout << "Hour" << "\t" << "Distance Traveled" << endl;
    cout << "-------------------------" << endl;

    for (int perHourDistance = 1; perHourDistance <= hoursTravelled; perHourDistance++)
    {
        double distance = speedOfVehicle * perHourDistance;
        cout << perHourDistance << "\t" << distance << endl;
    }
}