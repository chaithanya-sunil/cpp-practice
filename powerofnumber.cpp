<<<<<<< HEAD
#include<iostream>
using namespace std;

int main () {

    double base ,exponent ;
    int result =1;

    cout << " enter a number  :";
    cin >> base ;

    cout << " enter exponent : ";
    cin >> exponent;

    for (int i =0 ;i< exponent;i++){
          result =result * base;
    }
    cout << base << "^" << exponent << " =" << result << endl;
    return 0;

=======
#include<iostream>
using namespace std;

int main () {

    double base ,exponent ;
    int result =1;

    cout << " enter a number  :";
    cin >> base ;

    cout << " enter exponent : ";
    cin >> exponent;

    for (int i =0 ;i< exponent;i++){
          result =result * base;
    }
    cout << base << "^" << exponent << " =" << result << endl;
    return 0;

>>>>>>> c0100b4c6670ae00cbb8590d9ea18b0f3b36fe52
}