// binary search is applicable only for sorted array 
#include<iostream>
#include<vector>
using namespace std;
int bs(vector<int> &arr,int target){
  int n = arr.size();
  int start = 0;
  int end = n-1;
  while(start<=end){
    int mid = start +(end-start)/2;  //1+(5-1)/2 =1+2=3
    if(target<=arr[mid]){
       end = mid-1;
    }
    else{
      start = mid+1;
    }
  }
  return start;
}

int main(){
   vector<int> arr ={1,2,3,4,5,6,7};
   int target = 3;
   cout<<bs(arr,target);
  return 0;
}