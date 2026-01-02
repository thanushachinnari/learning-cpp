#include<iostream>
using namespace std;

int gdc(int n1,int n2){
   int result =0;
   for(int i =1;i<=min(n1,n2);i++){
    if(n1%i==0 &&n2%i==0){
    result = i;
    }
   }
    
   return result;
}

int main(){
  int n1 = 9;
  int n2 =12;
  cout<<gdc(n1,n2);
  return 0;
}
