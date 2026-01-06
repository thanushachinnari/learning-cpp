// Find Missing Number in Sorted Array 
#include<iostream>
#include<vector>
using namespace std;

int Missing_ele(vector<int>&arr){
  int n = arr.size();
  int total_sum =0;

  for(int i =1;i<n+1;i++){
    total_sum+=i;
  }
    int arrsum = 0;
  for(int i =0;i<n;i++){
    arrsum+=arr[i];
  }
  return total_sum - arrsum;
}
int main(){
  vector<int> arr={1,2,3,4,5,7,8};
  cout<<Missing_ele(arr);
  return 0;
}