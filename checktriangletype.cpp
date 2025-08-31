#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout << "Enter 3 sides  of a triangle :";
    cin >> a>> b >> c;

    if (a+b>c && b+c>a && a+c>b )
    {
        if(a==b && b==c ){
            cout <<"The triangle is equilateral."<< endl;
        }else if ( a==b || b==c || a==c){
            cout << "The triangle is isosceles." << endl;
        }else{
            cout << " The triangle is scalene" << endl;
        }
    }else {
            cout << " The input is not valid " << endl;
        }
        return 0;
    }