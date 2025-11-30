#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double userDollars;
    double convertedYen;
    double convertedEuro;
    const double YEN_PER_DOLLAR = 149.51;
    const double EUR_PER_DOLLAR = 0.85;

    cout << "Enter the number of US Dollars: ";
    cin >> userDollars;

    convertedYen = userDollars * YEN_PER_DOLLAR;
    convertedEuro = userDollars * EUR_PER_DOLLAR;

    cout << userDollars << '$' << " in Japanese Yen is: " << fixed << setprecision(2);
    cout << convertedYen << "¥" << endl;
    cout << userDollars << '$' << " in Euros is: " << fixed << setprecision(2); 
    cout << convertedEuro << "€" << endl;
}