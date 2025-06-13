#include <iostream>
#include <cmath> // for sqrt()
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int num = 2; num <= n; num++) {
        bool isPrime = true;
        int limit = sqrt(num); 

        for (int i = 2; i <= limit; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }

       
        if (isPrime) {
            cout << num << " is a prime number." << endl;
        } 
    }

    return 0;
}
