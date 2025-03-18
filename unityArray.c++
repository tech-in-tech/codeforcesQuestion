#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void solve(){
  int n;
  cin>>n;
  vector<int> a(n);
  for(int i = 0;i<n;i++){
    cin>>a[i];
  }
  int count1 = count(a.begin(),a.end(),1);
  int count_1 = n-count1;
  if(count1>=count_1){
    cout<<(count_1%2)<<"\n";
  }
  else{
    int t= (count_1-count1+1)/2;
    count_1-=t;
    if(count_1%2){
      t++;
    }
    cout<<t<<"\n";
  }

  return;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}

/* 
-1 -1 -1 1 1 = p = -1
*/