#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void solve(){
  int n,m;
  cin>>n>>m;
  vector<string> v(n);
  for(int i = 0;i<n;i++){
    cin>>v[i];
  }



  int res = 0 ;
  for(int i = 0;i<m;i++){
    if(v[n-1][i]=='D') res++;
  }


  for(int i = 0;i<n;i++){
    if(v[i][m-1]=='R') res++;
  }


  

  cout<<res<<"\n";


}



/*


RDDDDDRRR
RRDDRRDDD
RRDRDRRDR
DDDDRDDRR
DRRDRDDDR
DDRDRRDDC

n,m
*/

int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}