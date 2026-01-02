
// 8️⃣ Given a vector of pairs, find and print the pair having the maximum second value.

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){
  vector<pair<int,int>> p ={{1,2},{6,6},{8,9},{4,7}}; 
  int max_val = INT_MIN;
  pair<int,int>result ={0,0};
  for(int i =0;i<p.size();i++){
    if(p[i].second>max_val){
      max_val=p[i].second;
      result = p[i];
    }
  }
  cout<<result.first<<" "<<result.second;
  return 0;
}