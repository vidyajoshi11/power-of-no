#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    int base, exp;
 
    cout << "Enter base and exponent\n";
    cin >> base >> exp;
 
    cout << base << "^" << exp << " = " << pow(base, exp);
    return 0;
}
