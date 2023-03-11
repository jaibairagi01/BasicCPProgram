#include <iostream>
using namespace std;

int main(){
    int y,d,w;

    cout << " Enter the No. of Days: ";

    cin >> d;

    y = d/365;
    d = (d%365)/7;
    w = d/7;

    cout << "\nYears: " << y << "\nDays: " << d << "\nWeeks: " << w;

    return 0;
}