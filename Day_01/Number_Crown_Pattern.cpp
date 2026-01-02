#include<iostream>
using namespace std;
void print(int n){
  //number
  int space =2*(n-1);
  for(int i = 1;i<n;i++){
    for(int j =1;j<=i;j++ ){
      cout<<j;
    }
    //space
    for(int j =0;j<space-2;j++){
      cout<<" ";
    }
     //number
     for(int j =i;j>=1;j--){
      cout<<j;
     }
  
    cout<<endl;
    space-=2;
}
  }

int main(){
  int n =5;
  print(n);
  return 0;
}
