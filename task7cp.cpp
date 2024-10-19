#include <iostream>
using namespace std;

void hospital(int);
main()
{
    int numdays;
    cout << "Enter number of days you visited Hospital: ";
    cin >> numdays;
    hospital(numdays);
}

void hospital (int numdays)
{
    int Treated = 0, Untreated = 0, Doctors = 7;
    
    for (int days = 1; days <= numdays ; days++)
    {
        int patients;
        cout << "Number of patients who visited hospital on Day "<< days <<": ";
        cin >> patients;

        if (days % 3 == 0 && days != 0 && Untreated > Treated)
        {
            Doctors++;
        }

        if (patients > Doctors)
        {
            Treated += Doctors;
            Untreated += patients - Doctors;
        }
        else 
        {
            Treated += patients;
        }
    }
        cout << "Treated Patients: "<< Treated<< endl;
        cout << "Untreated Patients: "<< Untreated << endl;
}