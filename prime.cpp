#include<iostream>
using namespace std;
int main (){
    int n,i;
    int prime =0;
    cout <<"Enter a number :";
    cin >> n;
    for ( i=2;i<=n/2;i++){
        if(n%i==0){
            prime =1 ;
            break;
        }
    }
    if (prime ==0){
        cout << "This is a prime number. ";
    }else {
        cout << "This is not a prime number .";

    }
    return 0;
}