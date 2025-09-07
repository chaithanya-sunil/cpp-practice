#include<iostream>
#include<cstring>
using namespace std;
int main (){
    char str[100], temp;
    int i=0,j;
    cout << "Enter the string : ";
    cin>>str;
    j=strlen(str)-1;
    while (i<j)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++;
        j--;
    }
    cout << "Reverse of the string =  "<< str;
    return 0;
}