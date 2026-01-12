// Find Square Root of a Number (Integer Part)
#include<iostream>
#include<vector>
using namespace std;
int SqrtRoot(int target)
{
  int start = 1;
  int end = target;
  while(start<=end)
{
  int mid = start+(end-start)/2;
  int val = mid*mid;
  if(val >=target){
    end = mid-1;

  }
  else{
    start = mid+1;
  }
}
  return start;
}
int main(){
  int target = 36;
 cout<< SqrtRoot(target);
  return 0;
}