#include<iostream>
using namespace std;
int rev_num(int num){
  int rev_num =0;
   while(num>0){ //num=123
    
    int rev = num%10; //123%10 =3
    rev_num = rev_num*10+rev; //initial rev_num =0,rev_num*10 = 0*10 = 0+3 =3
    num/=10; //it removes the last element 123/10 =12
   }
  return rev_num;
}
int main(){
  int n =123;
  cout<<rev_num(n);
  return 0;
}