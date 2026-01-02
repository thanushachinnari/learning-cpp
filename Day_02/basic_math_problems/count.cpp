#include<iostream>
using namespace std;
#include<vector>
int count_digits(int n){
  int count = 0;
 while(n>0){
  n/=10;  
  count++; 
 }
  return count;
}
int main(){
  int n =153;
 cout<<count_digits(n);
  return 0;
}