#include<iostream>
using namespace std;
int sumSq(int n){
    if(n == 1) return 1;
    return n*n + sumSq(n-1);
}
int main(){
int answer = sumSq(4);
cout<<answer;
}