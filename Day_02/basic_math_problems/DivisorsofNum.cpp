#include<iostream>
using namespace std;

void divisors_num (int n){
    int store =0;
    for(int i =1;i<=n;i++){
      if(n%i==0){
       cout<<i<<" ";
      }
    }
}

int main(){
  int n =8;
  divisors_num (n);
  return 0;
}