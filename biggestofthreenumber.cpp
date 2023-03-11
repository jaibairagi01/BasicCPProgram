#include <iostream>
using namespace std;

int main(){
    int a, b , c;

    cout << " Enter the three numbers a, b & c : " << endl;
    cin >> a >> b >> c;

    if(a >= b && a >=c){
        cout << " The Largest Among Three Numbers is : " << a << endl;
    }
    else if(b >= a && b >= c){
        cout << " THe Largest Among Three Numbers is : " << b << endl;
    }
    else{
        cout << " The largest Among Three Numbers is : " << c << endl;
    }
    return 0;

}