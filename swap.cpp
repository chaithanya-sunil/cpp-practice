#include<iostream>
using namespace std;

int main(){
    int num1,num2,temp;
    cout<<"Enter the first number:"<<endl;
    cin>>num1;

    cout<<"Enter  the second number :"<<endl;
    cin>>num2;

        temp=num1;
        num1=num2;
        num2=temp;

    cout<<"First number is  "<<num1<<endl;
    cout<<"Second number is "<<num2<<endl;

    return 0;
}