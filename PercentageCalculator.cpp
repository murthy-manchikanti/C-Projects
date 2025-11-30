#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int numberMales;
    int numberFemales;
    double total;
    double percentMales;
    double percentFemales;

    cout << "Enter the number of Males: ";
    cin >> numberMales;
    cout << "Enter the number of Females: ";
    cin >> numberFemales;

    total = numberMales + numberFemales;
    percentMales = (numberMales / total) * 100.0;
    percentFemales = (numberFemales / total) * 100.0;

    cout << "The percentage of Males: " << setprecision(2) << percentMales << '%' << endl;
    cout << "The percentage of Females: " << setprecision(2) << percentFemales << '%' << endl;
}