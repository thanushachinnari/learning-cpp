#include<iostream>
#include<vector>
using namespace std;

int missele(vector<int>&arr){
  int n = arr.size();
  int start = 0;
  int end = n-1;
  while(start<=end){
    int mid = start+(end-start)/2;    //0+(8-0)/2 = 4
    //checks the value of mid and index of the array
    if(arr[mid]==mid+1){   
      start = mid+1;   // both are eqaul ,then start is moves to mid +1
    }
    else{
      end = mid-1;  // otherwise end will be mid-1;
    }
  }

  return end+2;  // it prints the missing element
}
int main(){
  vector<int> arr ={1,2,4,5,6,7,8,9};
 cout<<missele(arr);
  
}