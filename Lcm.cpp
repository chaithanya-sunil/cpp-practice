#include<iostream>
using namespace std;
int main (){

    int a , b ;
    cout << " Enter two numbers: ";
    cin >> a >> b ;
    int lcm;
    for (lcm = (a > b ? a : b);  ;  lcm ++){
        if (lcm % a == 0 && lcm % b == 0){
            break;
        }

    }
    cout << "LCM =  " << lcm << endl;
    return 0;
}