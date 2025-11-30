#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

unsigned int userAge;
string userCitizen;
bool votingEligibility(unsigned int, string);

int main()
{
    cout << "Enter your age: ";
    cin >> userAge;
    cout << "Are you a citizen of the United States?: ";
    cin >> userCitizen;

    votingEligibility(userAge, userCitizen);
}

bool votingEligibility(unsigned int userAge, string userCitizen)
{
    if (userAge >= 18 && (userCitizen == "Yes" || userCitizen == "yes"))
    {
        cout << "You are eligible to Vote!" << endl;
    }
    else
    {
        cout << "You are not eligible to vote.";
    }
    return 0;
}