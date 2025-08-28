#include<iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout << " Enter  any 3 numbers : ";
    cin >> a >> b >> c;
    if (a>b && a>c)
    {
        cout << "The largest among 3 numbers is  "<< a << endl;
    }
    else if ( b>c)
    {
        cout << "The largest among 3 numbers is  "<< b<< endl;
    }
    else 
    {
        cout << "The largest among 3 numbers is " << c << endl;
    }
        return 0;
}