#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));

    int number1 = rand() % 900 + 100;
    int number2 = rand() % 900 + 100;
    int result = number1 + number2;

    cout << setw(6) << number1 << endl;
    cout << setw(1) << '+';
    cout << setw(5) << number2 << endl;
    cout << "------" << endl;
    cout << setw(6) << result << endl;
}