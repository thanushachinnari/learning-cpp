#include<iostream>
using namespace std;
void palindrome(int num){
    int revnum =0;
    int originalnum =num;
    while(num>0){
      int rev = num%10;
      revnum = revnum *10+rev;
      num/=10;
    }
  if(originalnum == revnum){
    cout<<"palindrome";
  }
   else{
    cout<<"not a palindrome";
   }

}
int main(){
  int n;
  cin>>n;
  cout<<"the checking number is :";
 palindrome( n);
  return 0;
}