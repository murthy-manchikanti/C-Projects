#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

string primaryColorOne;
string primaryColorTwo;
string mix;
bool colorMixer(string, string);

int main()
{
    cout << "\t\tColor Mixer" << endl;
    cout << "Enter the first primary color: ";
    cin >> primaryColorOne;
    if (primaryColorOne == "red" || primaryColorOne == "blue" || primaryColorOne == "yellow")
    {
        cout << "Enter the second primary color: ";
        cin >> primaryColorTwo;
        if (primaryColorTwo == "red" || primaryColorTwo == "blue" || primaryColorTwo == "yellow")
        {
            colorMixer(primaryColorOne, primaryColorTwo);
        }
    }
    else
    {
        cout << "Error! please enter the primary colors of red, blue or yellow." << endl;
        return 0;
    }
}

bool colorMixer(string primaryColorOne, string primaryColorTwo)
{
    if ((primaryColorOne == "red" && primaryColorTwo == "blue"))
    {
        mix = "purple";
        cout << "When you mix " << primaryColorOne << " and " << primaryColorTwo;
        cout << ", you get " << mix;
        cout << "." << endl;
    }
    else if ((primaryColorOne == "red" && primaryColorTwo == "yellow"))
    {
        mix = "orange";
        cout << "When you mix " << primaryColorOne << " and " << primaryColorTwo;
        cout << ", you get " << mix;
        cout << "." << endl;
    }
    else if ((primaryColorOne == "yellow" && primaryColorTwo == "blue"))
    {
        mix = "green";
        cout << "When you mix " << primaryColorOne << " and " << primaryColorTwo;
        cout << ", you get " << mix;
        cout << "." << endl;
    }
    else if ((primaryColorOne == "red" && primaryColorTwo == "red"))
    {
        mix = "red";
        cout << "When you mix " << primaryColorOne << " and " << primaryColorTwo;
        cout << ", you get " << mix;
        cout << "." << endl;
    }
    else if ((primaryColorOne == "yellow" && primaryColorTwo == "yellow"))
    {
        mix = "yellow";
        cout << "When you mix " << primaryColorOne << " and " << primaryColorTwo;
        cout << ", you get " << mix;
        cout << "." << endl;
    }
    else if ((primaryColorOne == "blue" && primaryColorTwo == "blue"))
    {
        mix = "blue";
        cout << "When you mix " << primaryColorOne << " and " << primaryColorTwo;
        cout << ", you get " << mix;
        cout << "." << endl;
    }
    else
    {
        return 0;
    }
    return 0;
}