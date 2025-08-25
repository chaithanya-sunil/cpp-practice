#include<iostream>
using namespace std;

int main()
{
    float principal,rate,time,simpleinterest;

    cout<<"Enter principal amount :";
    cin>>principal;

    cout<<"Enter rate of interest :";
    cin>>rate;

    cout<<"Enter time :";
    cin>>time;

    simpleinterest=(principal* rate* time )/100 ;
    cout<<"Simpleinterest = "<< simpleinterest;

    return 0;
}