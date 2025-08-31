#include<iostream>
using namespace std;
int main(){
    int num  ;
    cout << " Enter a number : ";
    cin >> num ;
    cout << " The multiplication table of "<< num << "\n" << endl;

    for ( int i=1 ;i<=10 ;i++){
        int product = num*i;
        cout << num << " x " << i << " = " << product << endl;
        
    }
        return 0;

}