#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double userLoanAmount;
    double loanInterest;
    int numberMonths;
    double monthlyPayment;
    double monthlyInterest;
    double paidBackAmount;
    double paidInterest;

    cout << "Enter the loan amount: ";
    cin >> userLoanAmount;
    cout << "Enter the annual Interest Rate: ";
    cin >> loanInterest;
    cout << "Enter the number of Months: ";
    cin >> numberMonths;
    cout << endl;

    monthlyInterest = (loanInterest / 100.0) / 12;

    monthlyPayment = (((monthlyInterest * pow((1 + monthlyInterest), numberMonths)) 
    / (pow((1 + monthlyInterest), numberMonths) - 1)) * userLoanAmount);
    paidBackAmount = monthlyPayment * numberMonths;
    paidInterest = paidBackAmount - userLoanAmount;

    cout << left << setw(30) << "Loan Amount: " <<  "$" << setw(9) << right << fixed << setprecision(2);
    cout << userLoanAmount << endl;
    cout << "Monthly Interest Rate: " << setw(16) << fixed << setprecision(0) << monthlyInterest * 100;
    cout << "%" << endl;
    cout << "Number of Payments: " << setw(20) << fixed << setprecision(2) << numberMonths;
    cout << endl;
    cout << left << setw(30) << "Monthly Payment: " << "$" << right << setw(9) << fixed << setprecision(2); 
    cout << monthlyPayment;
    cout << endl;
    cout << left << setw(30) << "Amount Paid Back: " << "$" << right << setw(9) << fixed << setprecision(2); 
    cout << paidBackAmount;
    cout << endl;
    cout << left << setw(30) << "Interest Paid: " << "$" << right << setw(9) << fixed << setprecision(2); 
    cout << paidInterest << endl;
}