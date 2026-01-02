#include<iostream>
using namespace std;
void print(int n){
  for(int i = 0;i < n;i++){
    for(int j = 0;j < n-i;j++){
      cout<<"*";
    }
    //space
    for(int j=1;j<2*i+1;j++){
      cout<<" ";
    }
    //star printing
    for(int j = 0;j < n-i;j++){
      cout<<"*";
    }
    cout<<endl;
  }
  for(int i =n-1;i>=0;i--){
    for(int j = 0;j < n-i;j++){
      cout<<"*";
    }
    //space
    for(int j=1;j<2*i+1;j++){
      cout<<" ";
    }
    for(int j = 0;j < n-i;j++){
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