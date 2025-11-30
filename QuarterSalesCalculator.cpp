#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double getSales(string);
void findHighest(double, double, double, double);

int main()
{
    double northWest, southWest, northEast, southEast;
    northWest = getSales("Northwest");
    northEast = getSales("Northeast");
    southWest = getSales("Southwest");
    southEast = getSales("Southeast");

    findHighest(northWest, southWest, northEast, southEast);
}

double getSales(string company)
{
    double companySales;
    do
    {
        cout << "Enter the Quarterly Sales of " << company << " : ";
        cin >> companySales;
        if (companySales < 0)
        {
            cout << "Error! Please enter a value greater than $0.00.";
        }
    } while (companySales < 0);

    return companySales;
}

void findHighest (double northWest, double southWest, double northEast, double southEast)
{
    double highest;
    string topDivision;

    if (southEast > northEast)
    {
        highest = southEast;
        topDivision = "Southeast";
    }
    else if (northWest > northEast)
    {
        highest = northWest;
        topDivision = "Northwest";
    }
    else if (southWest > northEast)
    {
        highest = southWest;
        topDivision = "Southwest";
    }
    else
    {
        highest = northEast;
        topDivision = "Northeast";
    }
    cout << "The highest grossing division is " << topDivision << endl;
    cout << "Sales amount of " << topDivision << " is: ";
    cout << "$" << highest << fixed << setprecision(2) << endl;
}