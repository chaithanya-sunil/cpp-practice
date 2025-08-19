#include<iostream>
using namespace std;

int main (){

    int a,b;
    cout << "Enter two numbers :";
    cin >> a>> b;
    if(a<b){
        cout << "Smallest number ="<< a << endl;
    }else if (b>a){
        cout << "Smallest number =" << b << endl;
    }else {
        cout << "both numbers are equal "<< endl;
    }
    return 0;
}