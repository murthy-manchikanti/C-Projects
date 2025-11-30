#include <iostream>
using namespace std;

double rainFallChecker(int, int &, double, double &);
int main() 
{
    int periodOfYears;
    double rainfall, totalRainfall = 0;
    int totalMonths;

    rainFallChecker(periodOfYears, totalMonths, rainfall, totalRainfall);
    double averageRainfall = (totalRainfall / (totalMonths * 1.0));

    cout << endl << "Total Number of months: " << totalMonths << endl;
    cout << "Total rainfall: " << totalRainfall << " in" << endl;
    cout << "Average monthly rainfall: " << averageRainfall << " in" << endl;
}

double rainFallChecker(int periodOfYears, int &totalMonths, double rainfall, double &totalRainfall)
{
    cout << "Enter the number of years: ";
    cin >> periodOfYears;

    while (periodOfYears < 1)
    {
        cout << "Error! Number of years must be at least 1. Please enter again: ";
        cin >> periodOfYears;
    }

    totalMonths = periodOfYears * 12;

    for (int year = 1; year <= periodOfYears; year++) 
    {
        cout << endl << "Year " << year << ": " << endl;

        for (int month = 1; month <= 12; month++) 
        {
            cout << "Enter rainfall for month " << month << " in inches(in): ";
            cin >> rainfall;

            if (rainfall < 0) 
            {
                cout << "Error! Rainfall cannot be negative. Please enter again: ";
                cin >> rainfall;
            }
            totalRainfall += rainfall;
        }
    }

    return 0;
}