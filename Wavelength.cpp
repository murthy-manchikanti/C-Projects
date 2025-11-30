#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double typeOfWave (double);

int main()
{
    double wavelength;
    cout << "Enter the wavelength to find out the radiation (in m): ";
    cin >> wavelength;
    typeOfWave(wavelength);
}

double typeOfWave(double wavelength)
{
    if (wavelength < 1E-2)
    {
        if (wavelength >= 1E-3 && wavelength < 1E-2)
        {
            cout << "A wave with a wavelength of " << wavelength << " meters would be a Microwave";
            cout << endl;
            return 0;
        }
        else if (wavelength >= 7E-7 && wavelength < 1E-3)
        {
            cout << "A wave with a wavelength of " << wavelength << " meters would be a Infrared";
            cout << endl;
            return 0;
        }
        else if (wavelength >= 4E-7 && wavelength < 7E-7)
        {
            cout << "A wave with a wavelength of " << wavelength << " meters would be a Visible Light";
            cout << endl;
            return 0;
        }
        else if (wavelength >= 1E-8 && wavelength < 4E-7)
        {
            cout << "A wave with a wavelength of " << wavelength << " meters would be a Ultraviolet";
            cout << endl;
            return 0;
        }
        else if (wavelength >= 1E-11 && wavelength < 1E-8)
        {
            cout << "A wave with a wavelength of " << wavelength << " meters would be a X-ray";
            cout << endl;
            return 0;
        }
        else if (wavelength < 1E-11)
        {
            cout << "A wave with a wavelength of " << wavelength << " meters would be Gamma Rays";
            cout << endl;
            return 0;
        }
    }
    if (wavelength >= 1E-2)
    {
        cout << "A wave with a wavelength of " << wavelength << " meters would be Radio Waves";
        cout << endl;
        return 0;
    }
    return 0;
}