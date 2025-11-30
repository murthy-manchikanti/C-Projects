#include <iostream>
#include <iomanip>
using namespace std;

double calculateCharge(int, double, double, double);
double calculateCharge(double, double);

int main() 
{
    char patientInput;
    double totalHospitalCharges = 0.0;
    int numberOfDays;
    double perDayRate, hospitalMedicationCharges, hospitalServiceCharges;

    cout << "Was the patient an in-patient or an out-patient? (Enter i or o): ";
    cin >> patientInput;

    if (patientInput == 'i' || patientInput == 'I') 
    {
        cout << "Enter the number of days spent in the hospital: ";
        cin >> numberOfDays;
        if (numberOfDays > 0)
        {
            cout << "Enter the daily rate: $ ";
            cin >> perDayRate;
            cout << "Enter charges for hospital services like lab tests, medicines, etc.: $";
            cin >> hospitalServiceCharges;
            cout << "Enter hospital medication charges: $ ";
            cin >> hospitalMedicationCharges;
            totalHospitalCharges = calculateCharge(numberOfDays, perDayRate, hospitalMedicationCharges, hospitalServiceCharges);
        }
        else
        {
            cout << "Error! Please enter a number greater than zero." << endl;
            return 0;
        }
    } 
    else if (patientInput == 'o' || patientInput == 'O') 
    {
        double hospitalMedicationCharges, hospitalServiceCharges;
        cout << endl << "Enter charges for hospital services (lab tests, etc.): $";
        cin >> hospitalServiceCharges;
        if (hospitalServiceCharges > 0)
        {
            cout << "Enter hospital medication charges: $ ";
            cin >> hospitalServiceCharges;
            totalHospitalCharges = calculateCharge(hospitalMedicationCharges, hospitalServiceCharges);
        }
        else
        {
            cout << "Error! Please enter a number greater than zero." << endl;
            return 0;
        }
    } 
    else 
    {
        cout << "Error! Please enter I or O." << endl;
        return 0;
    }

    cout << endl;
    cout << "Total Hospital Charges: $" << fixed << setprecision(2) << totalHospitalCharges << endl;
}

double calculateCharge(int numberOfDays, double perDayRate, double hospitalMedicalCharges, double hospitalServiceCharges) 
{
    double inPatientTotalBilling = (numberOfDays * perDayRate) + hospitalMedicalCharges + hospitalServiceCharges;
    return inPatientTotalBilling;
}

double calculateCharge(double hospitalMedicationCharges, double hospitalServiceCharges) 
{
    double outPatientTotalBilling = hospitalMedicationCharges + hospitalServiceCharges;
    return outPatientTotalBilling;
}