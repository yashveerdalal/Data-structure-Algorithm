#include<iostream>
using namespace std;
int main(){
     int n;
        cout << "Enter a number: ";
        cin >> n;
    
        int factorial = 1; // Initialize factorial to 1
        for (int i = 1; i <= n; i++) {
            factorial *= i; // Multiply factorial by the current number
        }
        cout << "Factorial of " << n << " is: " << factorial << endl; // Output the result
        return 0;
}