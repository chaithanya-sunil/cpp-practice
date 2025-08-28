#include<iostream>
using namespace std ;
int main ()
{   
    int mark ;
    char grade;

    cout << "Enter your mark: "<< endl;
    cin >> mark;

    if ( mark >= 90){
        grade = 'A';
    }
    else if (mark >= 80)
    {
        grade = 'B';
    }
    else if (mark >= 65)
    {
        grade = 'C';
    }
    else if ( mark>=45)
    {
        grade = 'D';
    }
    else 
    {
        grade = 'F';
    }

            cout << "Your grade is " << grade << endl;
    
        return 0;

}
