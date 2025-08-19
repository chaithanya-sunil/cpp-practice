#include<iostream>
#include<cmath>
using namespace std;

int main () 
{
    double base ,exponent , result;
    cout << " enter a number  :";
    cin >> base ;

    cout << " enter exponent : ";
    cin >> exponent;

    result = pow(base ,exponent);
    cout << base << "^ "<< exponent << "=" << result << endl;

    return 0;
}