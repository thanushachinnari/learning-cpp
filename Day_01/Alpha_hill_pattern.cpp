//      A
//     ABA
//    ABCBA
//   ABCDCBA
//  ABCDEDCBA
#include<iostream>
using namespace std;

void print(int n){
  for(int i =0;i<n;i++){
    //space
    for(int j =0;j<n-i;j++){
      cout<<" ";
    }  
    // half triangle with increasing letter
    char ch = 'A';
    for(int j =1;j<=i;j++){
      cout<<ch;
       ch++;
      }
      //decreasing letter remaining half;
      ch-=2;
      for(int j =1;j<i;j++){
        cout<<ch;
        ch=ch-1;
      }
      cout<<endl;
    }
    
  }

int main(){
   int n =6;
   print(n);

  return 0;

}