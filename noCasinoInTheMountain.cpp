#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n,k;
  cin>>n>>k;
  vector<int> vec(n);
  for(int i = 0;i<n;i++){
    cin>>vec[i];
  }

  int count = 0;
  int i = 0;
  while(i<=n-k){
    bool canHike = true;
    for(int j = i;j<i+k;j++){
      if(vec[j]==1){
        canHike = false;
        break;
      }
    }

    if(canHike){
      count++;
      i+=k+1;
    }
    else{
      i++;
    }
  }

  cout<<count<<"\n";
}

/* 
3
0 0 1 0 0 0 1 0 0 1 0 0 0 

*/


int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}


