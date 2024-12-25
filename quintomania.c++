#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void solution(){
  int n;
  cin>>n;
  vector<int> vec(n);
  for(int i = 0;i<n;i++){
    cin>>vec[i];
  }
  bool flag = true;
  for(int i = 1;i<n;i++){
    if(abs(vec[i]-vec[i-1])!=5 and abs(vec[i]-vec[i-1])!=7){
      flag = false;
    }
  }
  (flag)?cout<<"YES\n":cout<<"NO\n";
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solution();
  }
  return 0;
}