#include<iostream>
using namespace std;
void print(int n){
  for(int i = 0;i < n;i++){
    for(int j = 0;j < n;j++){
     int top = i;
      int bottom = j;
      int left = (2*n-2)-i;
      int right =(2*n-2)-j;
      cout<<min(min(top,bottom),min(left,right));

    }
    cout<<endl;
  }
}
int main(){
  int n =4;
  print(n);
  return 0;
}