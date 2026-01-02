//  Store n pairs of integers in an array and print all the pairs.
#include<iostream>
#include<vector>
using namespace std;


int main(){
  vector<pair<int,int>> arr ={{1,2},{3,4},{4,5},{8,9}};
  for(int i =0;i<arr.size();i++){
    cout<<arr[i].first<<","<<arr[i].second<<endl;
  }


  
  
  
  
  

  return 0;
}