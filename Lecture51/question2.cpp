#include<iostream>
using namespace std;
void Even(int n){
    if(n<=0)return;
    if(n%2==0){ cout<<n;
        cout<<endl;}

         Even(n-1); 

}
int main(){
Even(10);

}