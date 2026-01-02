#include<iostream>
using namespace std;

void print(int n){
  for(int i=1;i<n+1;i++){
    for(int j =1;j<n-i+1;j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
}

int main(){
  int n =5;
  print(n);
  return 0;
}