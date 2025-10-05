#include<iostream>
using namespace std;
int stair(int n){
    if(n <= 1) return 1;
    
    return stair(n-1) + stair(n-2);
}
int main(){

    int answer = stair(5);
    cout<<8;
}