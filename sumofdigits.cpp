#include<iostream>
using namespace std;
int main ()
{
    int n;
    int sum=0,digit;
    cout << " Enter a number :";
    cin >> n;
    while(n>0){
        digit= n % 10 ;
        sum =sum + digit ;
        n = n/10;
    }
    cout << "Sum of digits  = " << sum ;
    return 0 ;
}