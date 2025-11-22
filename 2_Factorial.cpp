// Author - Prem Prakash Kumar- 242886
#include <iostream>
using namespace std;

unsigned int fact( int n) {
    if (n == 0)          
        return 1;
    return n * fact(n - 1);
}

int main() {
    int n;
    cout<<"Enter a Number"<< endl;
    cin >> n;
    if (n>12) {    //Unsigned int can only store values upto 32bits positive numbers. 
         cout<< "factorial cannot be calculated"<<endl;
        return 0;
        }
    cout << fact(n) << "\n";
    return 0;
}
