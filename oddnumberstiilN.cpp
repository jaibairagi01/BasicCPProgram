#include <iostream>
using namespace std;

int main()
{
    int i, n;

    cout << " Print all odd numbers till : ";
    cin >> n;

    cout << "Odd numberes from 1 to " << n << " are " << endl;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}