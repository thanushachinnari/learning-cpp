// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Prime_num(int num){
  if(num<=0) cout<<"not a prime"; 
  for(int i =2;i<=sqrt(num);i++){  
      if(num%i==0) {           
        cout<<" not a prime";
     return;}
  }
cout<<"prime";

}
int main(){
    int n;
    cin>>n;
     
    cout<<"The Number Is:"<<" ";
   Prime_num(n);
  
  return 0;
}