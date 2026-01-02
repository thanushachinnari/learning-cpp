// *****
// *****
// *****
// *****
// *****
#include<iostream>
using namespace std;
void print(int n){
  for(int i =0;i<n;i++){  // i =0,1,2,3,4
    for(int j =0;j<n;j++){   // 0,1,2,3,4
      cout<<"*";
    }
    cout<<endl;
  }
}

int main(){
  int n =5;
  print(n);
}