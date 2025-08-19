#include<iostream>
using namespace std;

int main()
{
    int num;

    cout<<"Enter a number :"<<endl;
    cin>>num;

    if(num>0)
    {
        cout<<"  is positive ."<<endl;
    }
    else if(num<0) 
    {
        cout<< " is neagative ."<<endl;
    }
    else
    {
        cout<<"The number is zero ."<<endl;
    }
     return 0;
}