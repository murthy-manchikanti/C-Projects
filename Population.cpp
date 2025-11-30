#include <iostream>
using namespace std;

int getPopulation(int); 
void printStars(int, int);

int main() {

    int population1900 = getPopulation(1900);
    int population1920 = getPopulation(1920);
    int population1940 = getPopulation(1940);
    int population1960 = getPopulation(1960);
    int population1980 = getPopulation(1980);
    int population2000 = getPopulation(2000);
    printStars(1900, population1900);
    printStars(1920, population1920);
    printStars(1940, population1940);
    printStars(1960, population1960);
    printStars(1980, population1980);
    printStars(2000, population2000);
}

int getPopulation(int year)
{
    int pop;
    cout << "Enter the population for year " << year << ": ";
    cin >> pop;
    while (pop <= 1000) 
    {
        cout << "Error! Population must be at least 1,000. Please enter again: ";
        cin >> pop;
    }
    return pop;
}

void printStars(int year, int pop)
{
    cout << year << " ";
    for (int i = 0; i < pop / 1000; ++i)
    {
        cout << "*";
    }
    cout << endl;
}