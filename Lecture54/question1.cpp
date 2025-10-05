#include<iostream>
using namespace std;
int fibbo(int n){
    if(n == 1 )return 0;
    if(n == 2)return  1;
    return fibbo(n-2) + fibbo(n-1);

}
int main(){
int answer = fibbo(5);
cout<<answer;
}