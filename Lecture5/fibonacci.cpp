#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the position (n): ";
    cin >> n;

    int first = 0, second = 1, next;

    if (n == 0) {
        cout << "Fibonacci number at position " << n << " is: " << first << endl;
    } else if (n == 1) {
        cout << "Fibonacci number at position " << n << " is: " << second << endl;
    } else {
        for (int i = 2; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
        cout << "Fibonacci number at position " << n << " is: " << second << endl;
    }

    return 0;
}
