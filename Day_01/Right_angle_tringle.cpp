// * i=0,j=0
// ** i=1,j=1
// *** i=2;j=2
// **** i=3;j=4
// ***** i=4;j=4
#include<iostream>
using namespace std;
void print(int n){
for(int i =0;i<n;i++){  
  for(int j =0;j<=i;j++){ 
    cout<<"*";
  }
  cout<<endl;
}



}
int main(){
  int n =5;
  print(n);
}
