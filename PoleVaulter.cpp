#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <string>
using namespace std;

double vaultHeight1;
double vaultHeight2;
double vaultHeight3;
double month1, day1, year1;
double month2, day2, year2;
double month3, day3, year3;
char com;
char slash;

void testUserHeights()
{
    if (vaultHeight3 > vaultHeight2 && vaultHeight3 > vaultHeight1)
    {
        cout << vaultHeight3 << " m on ";
        cout << month3 << slash << day3 << slash << year3 << endl;
        if (vaultHeight2 > vaultHeight1)
        {
            cout << vaultHeight2 << " m on ";
            cout << month2 << slash << day2 << slash << year2 << endl;
            cout << vaultHeight1 << " m on ";
            cout << month1 << slash << day1 << slash << year1 << endl;
        }
        else if (vaultHeight2 < vaultHeight1)
        {
            cout << vaultHeight1 << " m on ";
            cout << month1 << slash << day1 << slash << year1 << endl;
            cout << vaultHeight2 << " m on ";
            cout << month2 << slash << day2 << slash << year2 << endl;
        }
    }
    else if (vaultHeight2 > vaultHeight1 && vaultHeight2 > vaultHeight1)
    {
        cout << fixed << setprecision(1) << vaultHeight2 << " m on ";
        cout << month2 << slash << day2 << slash << year2 << endl;
        if (vaultHeight3 > vaultHeight1)
        {
            cout << vaultHeight3 << " m on ";
            cout << month3 << slash << day3 << slash << year3 << endl;
            cout << vaultHeight1 << " m on ";
            cout << month1 << slash << day1 << slash << year1 << endl; 
        }
        else if (vaultHeight3 < vaultHeight1)
        {
            cout << vaultHeight1 << " m on ";
            cout << month1 << slash << day1 << slash << year1 << endl;
            cout << vaultHeight3 << " m on ";
            cout << month3 << slash << day3 << slash << year3 << endl;
        }
    }
    else
    {
        cout << vaultHeight1 << " m on ";
        cout << month1 << slash << day1 << slash << year1 << endl;
        if (vaultHeight3 > vaultHeight2)
        {
            cout << vaultHeight3 << " m on ";
            cout << month3 << slash << day3 << slash << year3 << endl;
            cout << vaultHeight2 << " m on ";
            cout << month2 << slash << day2 << slash << year2 << endl;
        }
        else if (vaultHeight3 < vaultHeight2)
        {
            cout << vaultHeight2 << " m on ";
            cout << month2 << slash << day2 << slash << year2 << endl;
            cout << vaultHeight3 << " m on ";
            cout << month3 << slash << day3 << slash << year3 << endl;
        }
    }
}
int main()
{
    string name = "";
    cout << "Please enter the name of the pole vaulter: ";
    getline(cin, name);
    cout << "Enter the first vault information (height, date (mm/dd/yyyy)): ";
    cin >> vaultHeight1 >> com >> month1 >> slash >> day1 >> slash >> year1;
    if (vaultHeight1 < 2.0 || vaultHeight1 > 5.0)
    {
        cout << "Error! Please enter values between 2.0 and 5.0" << endl;
        return 0;
    }
    cout << "Enter the second vault information (height, date (mm/dd/yyyy)): ";
    cin >> vaultHeight2 >> com >> month2 >> slash >> day2 >> slash >> year2;
    if (vaultHeight2 < 2.0 || vaultHeight2 > 5.0)
    {
        cout << "Error! Please enter values between 2.0 and 5.0" << endl;
        return 0;
    }
    cout << "Enter the third vault information (height, date (mm/dd/yyyy)): ";
    cin >> vaultHeight3 >> com >> month3 >> slash >> day3 >> slash >> year3;
    if (vaultHeight3 < 2.0 || vaultHeight3 > 5.0)
    {
        cout << "Error! Please enter values between 2.0 and 5.0" << endl;
        return 0;
    }
    testUserHeights();
}