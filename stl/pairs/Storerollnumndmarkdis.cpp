//  Use a vector<pair<int, int>> to store roll numbers and marks of students and display them.


#include<iostream>
#include<vector>
using namespace std;
int main(){
  pair<int, int> a ={1,98};
  pair<int, int> b ={2,35};
  pair<int, int> c ={3,76};
  pair<int, int> d ={4,67};
  pair<int, int> e ={5,100};
  vector<pair<int ,int>> arr ={a,b,c,d,e};
  for(int i =0;i <arr.size();i++){
    cout<<"rollnumbers:"<<arr[i].first<<" "<<"marks:"<<arr[i].second<<endl;
  }

  
  
  
  
  
  
   


  return 0;
}