#include<iostream>
using namespace std;

void print(int n){
  for(int i =0;i<n;i++){
    char ch = 'A'+i;
    for(int j =0;j<=i;j++){
      cout<<ch;
        // ch = ch+1;
    }
   
    cout<<endl;
   
  }
}
int main(){
  int n =5;
  print(n);
  return 0;
}