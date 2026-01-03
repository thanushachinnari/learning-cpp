#include<iostream>
#include<vector>
using namespace std;
int count(vector<int>&arr ,int target){
  int n  = arr.size();
  int start = 0;
  int end = n-1;
  int FO = -1;
  int LO =-1;
  while(start<=end){
    int mid = start+(end-start)/2;
    if(target == arr[mid]){
      FO = mid;
      end = mid-1;
    }
       else if(target <= arr[mid]){  
         end = mid-1;
        } 
   
    else{
        start = mid+1;
    }
  }
  start =0;end = n-1;
while(start<=end){
    int mid = start+(end-start)/2;
    if(target == arr[mid]){
      LO = mid;
      start = mid+1;
    }
     else if(target>arr[mid]){
      start = mid+1;
     }
   
    else{
        end = mid-1;
    }
  }


  return LO-FO+1;
}
int main(){
  vector<int>arr = {1,2,3,4,4,4,4,4,4,4,5,5,5,5,5,6}; // 15 end 0+(15-0)/2 = 7
 int target = 5;
cout<<count(arr,target);
  return 0;
}
