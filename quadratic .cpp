#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float a,b,c;
    cout << "Enter number a:";
    cin >> a;
    cout << " Enter number b :";
    cin >> b;
    cout << "Enter number c :";
    cin >> c;
     float quad = b*b -  4 *a*c;
     if (quad >= 0) {

        float root1 = (-b +  sqrt(quad))/(2*a);
        
        float root2 = (-b - sqrt(quad))/(2*a);

        cout << "Roots of quadratic equation :"<< root1 << "  " << root2 <<  endl;

     }
     else{

        cout << " Root are complex ." << endl;
     }
     return 0;


}