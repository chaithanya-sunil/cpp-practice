#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers from " << n << " to 1 are:\n";

    for (int num = n; num >= 2; num--) {
        int prime = 0;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                prime = 1; // not prime
                break;
            }
        }

        if (prime == 0) {
            cout << num << " ";
        }
    }

    return 0;
}