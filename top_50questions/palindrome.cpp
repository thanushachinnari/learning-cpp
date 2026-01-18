#include<iostream>
using namespace std;
void print(int num){
  int rev =0;
  int original = num;
  while(num>0){
    int last_num = num%10;  
     rev = rev*10+last_num;
    num=num/10;
  }
  if(original==rev){
    cout<<"palindrame";
  }
  else{
    cout<<"not a palindrome";
  }
 
}
int main(){
  int n = 121;
  print(n);
}