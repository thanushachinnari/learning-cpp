#include<iostream>
using namespace std;

void print(int n){
for(int i =0;i<n;i++){
    for(int j =i;j<n;j++){
      cout<<"*";
    }
    cout<<endl;
  }
}

int main(){
  int n =5;
  print(n);
  return 0;
}