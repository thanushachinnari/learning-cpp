// Find Floor and Ceil in a Sorted Array

//floor = greaterelement <=target
//ceil = smallerelemnt >=target

#include<iostream>
#include<vector>
using namespace std;

int floor(vector<int> &arr,int target){
   int n = arr.size();
   int start = 0;
   int end = n-1;
   int floorval = -1;
   while(start<=end){                                      
     int mid = start+(end-start)/2; // 0+(5-0)/2
    if(arr[mid]<=target){                                   
          floorval=arr[mid];
          start = mid+1;
          
    }      
    else{
      end =mid-1;
    }
   }

  return floorval ;
}

int main(){
  vector<int>arr ={1,2,3,4,5,8};
  int target = 6;
  cout<<floor(arr, target);
  return 0;
}