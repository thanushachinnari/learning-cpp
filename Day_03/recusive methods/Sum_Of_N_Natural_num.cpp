#include<iostream>
using namespace std;
//sum of n natural numbers without using recursion function

// void Sum_Of_Number(int n){
//   int sum =0;
//   for(int i =1;i<n+1;i++){
//     sum+=i;
//   }
//   cout<<sum;
// }

//using recusion
int  Sum_Of_Number(int Num){
// int sum =0;
if(Num==0) return 0; 

 return Num+Sum_Of_Number(Num-1);
}
int main(){
  int n = 3;
  cout<< Sum_Of_Number(n);
  return 0;
}