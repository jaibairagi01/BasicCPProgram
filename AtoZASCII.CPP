#include <iostream>
using namespace std;

int main()
{
    int i;
    cout << "Alphabets from (A-Z) are: ";

    for (i = 65; i <= 90; i++)
    {
        cout << char(i) << " ";
    }
    cout << "Alphabets from (a-z) are: ";

    for (i = 97; i <= 122; i++)
    {
        cout << char(i) << " ";
    }
    return 0;
}