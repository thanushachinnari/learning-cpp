// 9️⃣ Write a function that returns a pair<int, int> containing the sum and difference of two numbers.
#include<iostream>
using namespace std;
pair<int,int> fun(){
  pair<int,int>p ={5,9};

   int sum = p.first+p.second;
   int differ = p.first-p.second;
   pair<int,int>result = {sum,differ};
  return result;
}
int main(){
  pair<int,int>op = fun();
 cout<<op.first<<op.second;
  return 0;
}