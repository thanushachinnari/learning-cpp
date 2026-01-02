// 🔟 Given a nested pair pair<int, pair<int, int>>, access and print all the elements.
#include<iostream>
using namespace std;
int main(){
  pair<int,pair<int,int>> p ={1,{2,3}};
  cout<<p.first;
  cout<<endl;
  cout<<p.second.first<<" "<<p.second.second;
  return 0;
}