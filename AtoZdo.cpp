
#include <iostream>
using namespace std;

int main()

{

    char i;

    cout << "The Alphabets from A to Z are: \n";

    i = 'A';

    do
    {
        cout << i << ' ';
        i++;
    } while (i <= 'Z');

    i = 'a';

    cout << "\nThe Alphabets from a to z are: \n";

    do
    {
        cout << i << ' ';
        i++;
    } while (i <= 'z');

    return 0;
}