#include<iostream>
#include<vector>
using namespace std;

int lastOccur(vector<int>&arr,int target){
  int n = arr.size();
  int start = 0;
  int end = n-1;
  int lastcoccurance = -1;
  while(start<=end){
    int mid = start +(end-start)/2; //0+4 =4
    if(target>=arr[mid]){
       lastcoccurance = mid;
       start = mid+1;
    }
    else{
      end = mid-1;
    }
  }

  return lastcoccurance;
}
int main(){
  vector<int> arr ={1,2,3,4,4,4,4,4,5,6,7};
  int target =4;
  cout<<lastOccur(arr,target);
  return 0;
}