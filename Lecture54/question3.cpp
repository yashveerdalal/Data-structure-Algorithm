#include<iostream>
using namespace std;

int gcd(int n, int m){
    if(m == 0) return n;      
    return gcd(m, n % m);      
}

int main(){
    cout << gcd(8, 20);     
}
