#include <iostream>
using namespace std;

int gcd(int x1, int x2);

int main(){
    int x1, x2;

    cout << "Enter two integers: ";
    cin >> x1 >> x2;

    cout << "GCD of " << x1 << " and " <<  x2 << " is: " << gcd(x1, x2);

    return 0;
}

int gcd(int x1, int x2){
    if (x2 != 0)
       return gcd(x2, x1 % x2);
    else
       return x1;
}
