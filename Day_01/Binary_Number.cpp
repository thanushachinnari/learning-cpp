#include<iostream>
using namespace std;
void print(int n){
  for(int i = 0;i < n;i++){
     for(int j =0;j<=i;j++){
     if((i+j+1)%2==0){  
      cout<<"0";
     }
     else{
      cout<<"1";
     }
     }
     cout<<endl;
  }
}
int main(){
  int n =5;
  print(n);
}
