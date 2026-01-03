#include<iostream>
#include<vector>
using namespace std;

int FirstOccur(vector<int> &arr, int target){
   int n = arr.size();
   int start = 1;
   int end = n-1;
   int firstoccurance = 0;
   while(start<=end){
    int mid = start+(end-start)/2;  //1+(9-1)/2 = 5
    if(target<=arr[mid]){
     
      end = mid-1;
      firstoccurance=mid;
    }
    else{
      start = mid+1;
    }
   }

  return firstoccurance;
}

int main(){
   vector<int> arr = {1,2,3,4,4,4,4,4,5,6,7};
   int target = 4;
  cout<< FirstOccur(arr,target);
  return 0;
}