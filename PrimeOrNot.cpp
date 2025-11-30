#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int &);
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << endl;
    if (isPrime(num) == true)
    {
        cout << num << " is a Prime Number." << endl;
    }
    else
    {
        cout << num << " is not a Prime Number." << endl;
    }
}

bool isPrime (int &num)
{
    int checknum = num;
    if (checknum < 2)
    {
        return false;
    }
    for (int i = 2; i < sqrt(checknum); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}