#include<iostream>
#include<vector>
using namespace std;
int ans =0;
void helper(vector<vector<int>> &v){
  for(auto ele:v){
    int count = 0;
    for(auto e:ele){
      if(e==1) count++;
    }
    if(count>=2){
      ans+=1;
    }
  }
}

int main(){
  int n;
  cin>>n;
  vector<vector<int>> v (n,vector<int>(3));
  for(int i = 0;i<n;i++){
    for(int j = 0;j<3;j++){
      cin>>v[i][j];
    }
  } 
  helper(v);
  cout<<ans;
  return 0;
}