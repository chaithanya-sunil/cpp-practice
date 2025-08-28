#include<iostream>
using namespace std;

int main ()
{
    int num;
    long long  product =1;
    cout << "Enter a natural numbers :";
    cin >> num ;
    for(int i=1 ; i<=num; i++)
    {
        product=product *i;
    }
    cout << " Product of natural numbers : " << product << endl;
    return 0;
}