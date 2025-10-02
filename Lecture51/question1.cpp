#include<iostream>
using namespace std;
void rCount(int n){
    if(n<=0){
        return;
    }

    else{ cout<<n;
        cout<<endl;
    rCount(n-1);
    

}}

int main(){
    rCount(5);
}