#include <iostream>
using namespace std;

int main() {
    int base;
    cout << "Enter the base: ";
    cin >> base;

    int power;
    cout << "Enter the power: ";
    cin >> power;

    int result = 1; // Store the final answer

    for (int i = 0; i < power; i++) {
        result *= base;
    }

    cout << "Result: " << result << endl;
    return 0;
}
