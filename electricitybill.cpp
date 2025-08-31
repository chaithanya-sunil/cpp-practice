#include<iostream>
using namespace std;
int main()
{
    int units;
    float bill=0;
    cout << " Enter units consumed :";
    cin >> units;

    if (units <= 100){
        cout << " Rate :5 per unit\n ";
        bill = units * 5;
    }
    else if (units <= 200){
        cout <<  "Rate :7 per unit\n ";
        bill = (100 * 5 ) + (units - 100)*7 ;
    }
    else 
    {
        cout << "Rate :10 per unit.\n";
        bill=(100 * 5) + (100 * 7) + (units -200) * 10 ;
    }
    cout << " your electricity bill is : " << bill << endl;
    return 0;
}