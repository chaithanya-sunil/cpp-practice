#include<iostream>
using namespace std;
int main()
{
    int angle1,angle2,angle3;
    int sum =0;
     cout << " Enter angle 1 : ";
     cin >> angle1;
     cout << " Enter angle 2 : ";
     cin >> angle2;
     cout << " Enter angle 3 : ";
     cin >> angle3;

     sum= angle1+angle2+angle3;
     if (sum==180 && angle1> 0  && angle2>0  && angle3>0)
     {
        cout << " The triangle is valid ."<< endl;

     }
     else {
        cout << " The triangle is not valid " << endl;
     }
        return 0;

}