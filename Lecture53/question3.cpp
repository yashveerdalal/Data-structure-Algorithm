#include<iostream>
using namespace std;
int powerTwo(int n){
  if(n==0) return 1;
  return 2 * powerTwo(n-1);

}
int main(){
 
int answer = powerTwo(4);
cout<<answer;
}