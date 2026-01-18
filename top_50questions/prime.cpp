// Prime number


#include<iostream>
#include<cmath>
using namespace std;

void print(int num){
  int prime = false;
  if(num<=1){ 
    cout<<"not a prime";
   
  }
  
  for(int i =2;i<=sqrt(num);i++){
     if(i%2==0){
      cout<<"not a prime";
      return;
     }
   
  }
    cout<<"prime";
 
}

int main(){
  int n =7;
  print(n);
}