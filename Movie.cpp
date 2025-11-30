#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double userClassA;
    double userClassB;
    double userClassC;
    const double ticketClassA = 15;
    const double ticketClassB = 12;
    const double ticketClassC = 9;
    double total;


    cout << "Enter the number of Tickets sold for Class A: ";
    cin >> userClassA;
    cout << "Enter the number of Tickets sold for Class B: ";
    cin >> userClassB;
    cout << "Enter the number of Tickets sold for Class C: ";
    cin >> userClassC;

    total = (userClassA * ticketClassA) + (userClassB * ticketClassB) + (userClassC * ticketClassC);

    cout << "Total amount of income generated as of ticket sales: ";
    cout << '$' << fixed << setprecision(2) << total << endl;


}