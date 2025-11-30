#include <iostream>
#include <iomanip>
using namespace std;

// Function declarations
int weeklyReportGenerator(int, double &, double &, double &, double &);

int main() 
{
    int employeeNumber;
    double grossPay, stateTax, federalTax, ficaWithhold;
    
    weeklyReportGenerator(employeeNumber, grossPay, stateTax, federalTax, ficaWithhold);
    double totalGrossPay = grossPay;
    double totalStateTax = stateTax;
    double totalFederalTax = federalTax;
    double totalFica = ficaWithhold;
    double netTotal = grossPay - (stateTax + federalTax + ficaWithhold);

    cout << fixed << setprecision(2);
    cout << "----------------------------------------" << endl;
    cout << "Total Gross Pay:      $" << setw(10) << totalGrossPay << endl;
    cout << "Total State Tax:      $" << setw(10) << totalStateTax << endl;
    cout << "Total Federal Tax:    $" << setw(10) << totalFederalTax << endl;
    cout << "Total FICA:           $" << setw(10) << totalFica << endl;
    cout << "Total Net Pay:        $" << setw(10) << netTotal << endl;
    return 0;
}

int weeklyReportGenerator(int employeeNumber, double &grossPay, double &stateTax, double &federalTax, double &ficaWithhold)
{
    do
    {
        cout << "Enter employee number (0 to end): ";
        cin >> employeeNumber;

        if (employeeNumber != 0)
        {
            bool valid = false;

            while (!valid)
            {
                cout << "Enter gross pay: ";
                cin >> grossPay;
                cout << "Enter state tax: ";
                cin >> stateTax;
                cout << "Enter federal tax: ";
                cin >> federalTax;
                cout << "Enter FICA withholdings: ";
                cin >> ficaWithhold;

                if (grossPay < 0 || stateTax < 0 || federalTax < 0 || ficaWithhold < 0)
                {
                    cout << "Error! Please enter a number greater than 0.\n" << endl;
                }
                else if (stateTax > grossPay || federalTax > grossPay || ficaWithhold > grossPay)
                {
                    cout << "Error! Withholdings cannot be greater than gross pay. Please enter the data again.\n" << endl;
                }
                else if ((stateTax + federalTax + ficaWithhold) > grossPay)
                {
                    cout << "Error! Total withholdings exceed gross pay. Please enter the data again.\n" << endl;
                }
                else
                {
                    valid = true;
                }
            }
        }

    } while (employeeNumber != 0);
    return 0;
}