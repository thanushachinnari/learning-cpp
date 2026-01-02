// 7️⃣ Sort a vector of pairs (x, y) such that:
// First sort by x
// If x is the same, sort by y

#include<iostream>
#include <algorithm> 
#include<vector>
using namespace std;
int main(){

 vector<pair<int,int>>arr = {{1,2},{1,89},{78,68},{30,57}};
 sort(arr.begin(),arr.end());

 for(int i =0;i<arr.size();i++){
  cout<<arr[i].first<<" "<<arr[i].second<<endl;
 }
  return 0;
}