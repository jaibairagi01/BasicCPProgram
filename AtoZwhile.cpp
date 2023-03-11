#include <iostream>
using namespace std;

int main()
{
    char i;

    cout << "Alphabets from (A-Z) are: \n";

    i = 'A';
    while (i <= 'Z')
    {
        cout << i << " ";
        i++;
    }

    cout << "\nAlphabets from (a-z) are: \n";
    i = 'a';
    while (i <= 'z')
    {
        cout << i << " ";
        i++;
    }
}