#include<iostream>
using namespace std;
int main (){
    int n ,sum=0;
    cout << "Enter number :";
    cin >> n;
    for (int i =1 ; i<= n;i+=2){
        sum +=i;
    }
    cout << "Sum of odd numbers from 1 to " << n << " = "<< sum << endl;
    return 0;
}