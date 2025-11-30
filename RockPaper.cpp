#include <iostream>
#include <cstdlib>   
#include <ctime>     
#include <string>
using namespace std;

string computerChoice (string, int &);
bool checkRockPaperScissors (string &, string &, bool &);

int main() 
{
    srand(time(0));
    string userChoice;
    int computerNumber;
    string computerMove;
    bool tie = true;

    cout << "---- Rock, Paper, Scissors! ----";
    do
    {
        cout << endl << "Enter your choice (rock, paper, scissors): ";
        cin >> userChoice;
        string printComputerChoice = computerChoice(computerMove, computerNumber);
        cout << "Computer chose: " << printComputerChoice << endl;
        checkRockPaperScissors(userChoice, computerMove, tie);
    } while (tie);
    return 0;
}

string computerChoice (string computerMove, int &computerNumber)
{
    computerNumber = rand() % 3 + 1; 
    if (computerNumber == 1)
    {
        computerMove = "rock";
    }
    else if (computerNumber == 2)
    {
        computerMove = "paper";
    }
    else
    {
        computerMove = "scissors";
    }
    return computerMove;
}

bool checkRockPaperScissors(string &userChoice, string &computerMove, bool &tie)
{
    cout << endl;
    if (userChoice == computerMove) 
    {
        cout << "It's a tie! Play again." << endl;
        tie = true;
    }
    else if (userChoice == "rock") 
    {
        if (computerMove == "scissors")
        {
            cout << "Rock smashes scissors! You win!" << endl;
        }
        else
        {
            cout << "Paper wraps rock! Computer wins!" << endl;
        }
        tie = false;
    }
    else if (userChoice == "paper") 
    {
        if (computerMove == "rock")
        {
            cout << "Paper wraps rock! You win!" << endl;
        }
        else
        {
            cout << "Scissors cut paper! Computer wins!" << endl;
        }
        tie = false;
    }
    else if (userChoice == "scissors") 
    {
        if (computerMove == "paper")
        {
            cout << "Scissors cut paper! You win!" << endl;
        }
        else
        {
            cout << "Rock smashes scissors! Computer wins!" << endl;
        }
        tie = false;
    }
    else 
    {
        cout << "Error! Please enter rock, paper, or scissors." << endl;
        tie = true;
    }
    return 0;
}