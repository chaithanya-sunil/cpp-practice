#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout << "Enter two numbers :";
    cin >> a>> b;

    if(a>b){
        cout << " largest number= " << a<< endl;
    }
    else if(b>a) {
        cout << " largest number = " << b << endl;

    }
    else{
        cout << "Both number are equal " <<endl;
    }
    return 0; 
}