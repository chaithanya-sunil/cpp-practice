#include<iostream>
using namespace std;
int main (){
    int  orignum,num, remainder ,sum=0;
    cout << " Enter a number : ";
    cin >> num;
    orignum = num;

    while (orignum != 0){
        remainder= orignum % 10 ;
        sum += remainder * remainder * remainder;
        orignum = orignum / 10;
    }
    if ( sum ==  num)
    {
        cout << num  << " is an armstrong number . ";

    }
    else {
        cout << num  << " is  not an armstrong number.";
    }
    return 0;
}