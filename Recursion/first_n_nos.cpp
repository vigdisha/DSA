#include <iostream>
using namespace std;

void displayNumbers(int n) {
    if (n >= 1) {
        cout << n << " ";
        displayNumbers(n - 1); // Recursively call with n-1
        //  cout << n << " ";
       
    }
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    displayNumbers(n);
    return 0;
}
