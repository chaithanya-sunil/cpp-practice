#include<iostream>
using namespace std;
int main (){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    for (int i=0;i<=n ;i++){
        cout << i << "  " << endl;
    }
    for ( int j =0; j>=n;j--){
        cout << j << "  " << endl;
    }
    return 0;
}