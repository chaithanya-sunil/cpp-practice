#include<iostream>
using namespace std;

int main ()
 {
    float radius ,area;
    const float pi =3.141;

    cout << "enter radius of the circle :  ";
    cin >> radius ;

    area = pi * radius * radius;
    cout << " Area of circle = " << area << endl;
    return 0;

}