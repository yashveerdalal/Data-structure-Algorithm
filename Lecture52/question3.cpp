#include <iostream>
using namespace std;

void Even(int n){
    if(n == 2){
        cout << 2 << endl;
        return;
    }
    Even(n - 1); 
    if(n % 2 == 0){
        cout << n << endl;
    }
}

int main(){
    Even(10);
    return 0;
}
