#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    // Negative numbers are not palindrome
    if (x < 0) {
        cout << "false";
        return 0;
    }

    int original = x;
    int rev = 0;

    // Reverse the number
    while (x > 0) {
        int digit = x % 10;      // take last digit
        rev = rev * 10 + digit;  // build reversed number
        x = x / 10;              // remove last digit
    }

    // Compare original and reversed
    if (original == rev)
        cout << "true";
    else
        cout << "false";

    return 0;
}