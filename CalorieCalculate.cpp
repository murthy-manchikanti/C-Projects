#include <iostream>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main()
{
    double calories;
    double fatGrams;
    double caloriesFromFat;
    double percentageCalories;

    cout << "Enter the number of calories: ";
    cin >> calories;
    cout << "Enter the number of fat grams: ";
    cin >> fatGrams;
    if (calories < 0 || fatGrams < 0)
    {
        cout << "Error! Either the Calories or Fat Grams have been entered incorrectly." << endl;
        return 0;
    }
    caloriesFromFat = fatGrams * 9;
    if (caloriesFromFat > calories)
    {
        cout << "Error! Either the Calories or Fat Grams have been entered incorrectly." << endl;
        return 0;
    }
    percentageCalories = (caloriesFromFat * 100) / calories;
    cout << "The percentage of Calories is: " << fixed << setprecision(2) << percentageCalories << "%" << endl;
    if (percentageCalories < 30)
    {
        cout << "This food is low in fat." << endl;
    }
}