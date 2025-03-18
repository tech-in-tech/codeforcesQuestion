#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  int count = 0;
  for(int i = 1;i<n;i++){
    if((a[i]%2==0) and (a[i-1]%2==0)  || (a[i]%2!=0) and (a[i-1]%2!=0)){
      count++;
    }
  }
  cout<<count<<"\n";

}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}