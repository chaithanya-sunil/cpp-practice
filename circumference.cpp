#include<iostream>
using namespace std;

int main ()
 {
    float radius ,circumference;
    const float pi =3.141;

    cout << "enter radius of the circle :  ";
    cin >> radius ;

    circumference =  2 * pi * radius ;
    cout << " circumference of circle = " << circumference << endl;
    return 0;

}