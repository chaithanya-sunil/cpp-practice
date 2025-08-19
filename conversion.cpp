#include<iostream>
using namespace std;

int main ()
{
    float celsius,fahrenheit;

    cout<<"enter temperature in celsius :";

    cin>>celsius;

    fahrenheit = (celsius *9/5) + 32 ;

    cout<<celsius<<" celsius ="<<fahrenheit<<" fahrenheit "<<endl;
   
   
    return 0;



}