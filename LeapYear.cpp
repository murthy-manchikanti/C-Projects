#include <iostream>
#include <cmath>
using namespace std;
bool leapYear(int);
int daysInMonth (int, int, int);
int main()
{
    unsigned int year;
    unsigned int month;
    unsigned int days;
    cout << "Enter a month (1-12): ";
    cin >> month;
    cout << "Enter a year: ";
    cin >> year;
    cout << endl;
    leapYear(year);
    cout << daysInMonth(month, year, days) << " days" << endl;
}
bool leapYear(int year)
{
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if (year % 4 == 0)
    {
        return true;
    }
    return 0;
}
int daysInMonth(int month, int year, int days)
{
    switch (month)
    {
        case 1:
            days = 31;
            break;
        case 2:
            if (leapYear(year) == true)
            {
                days = 29;
            }
            else
            {
                days = 28;
            }
            break;
        case 3:
            days = 31;
            break;
        case 4:
            days = 30;
            break;
        case 5:
            days = 31;
            break;
        case 6:
            days = 30;
            break;
        case 7:
            days = 31;
            break;
        case 8:
            days = 31;
            break;
        case 9:
            days = 30;
            break;
        case 10:
            days = 31;
            break;
        case 11:
            days = 30;
            break;
        case 12:
            days = 31;
            break;
        default:
            break;
    }
    return days;
}