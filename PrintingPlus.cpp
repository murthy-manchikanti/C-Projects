#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char plus = '+';
    for(int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << plus;
        }
        cout << setw(15 - i);
        for (int k = 10; k >= i; k--)
        {
            cout << plus;
        }
        cout << endl;
    }
}