#include<iostream>
using namespace std;
int main ()
{   char ch;
    cout << "Enter a character :";
    cin >> ch;

    if(ch >= '0' && ch >='9'){

        cout << ch << "is a digit . "<< endl;
        
    }
    else 
    {
        cout << ch << " is not a digit  " << endl;

    }
        return 0;

}