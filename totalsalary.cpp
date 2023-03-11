#include <iostream>
using namespace std;

int main(){
    float GrossPayment , basic, da, hra, da1, hra1;

    cout << " Enter basic salary : " << endl;
    cin >> basic;

    cout << " Enter the DA : " << endl;
    cin >> da1;

    cout << " Enter HRA : " << endl;
    cin >> hra1;

    da = (da1 * basic ) / 100;
    hra = (hra1 * basic) / 100;

    GrossPayment = basic + da + hra;

    cout << "\n Gross Salary : " << GrossPayment << endl;
    return 0;

}