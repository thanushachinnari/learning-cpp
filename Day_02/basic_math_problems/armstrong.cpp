#include<iostream>
using namespace std;
void armstrong(int n ){
     int sum =0;
     int original = n;

     while(n>0){
         int lastdigit = n%10;
         sum = sum+(lastdigit*lastdigit*lastdigit);
         n/=10;
     }
  if(original==sum){
     cout<<"true";
  }
  else{
    cout<<"false";
  }
}
int main(){
  int n =153;

  armstrong(n );
  return 0;
}