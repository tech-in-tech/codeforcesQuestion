#include<iostream>
#include<vector>
using namespace std;
void solve(){
  string s ="";
  vector<vector<char>> v(8,vector<char>(8));
  for(int i = 0;i<8;i++){
    for(int j = 0;j<8;j++){
      cin>>v[i][j];
      if(v[i][j] != '.'){
        s+=v[i][j];
      }
    }
  }
  cout<<s<<"\n";
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}