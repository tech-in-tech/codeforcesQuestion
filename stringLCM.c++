#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve(){
  string s1,s2;
  cin>>s1>>s2;
  long long n1 = s1.size(),n2 = s2.size();
  long long lcm = (n1*n2)/__gcd(n1,n2);
  string r1 = "",r2 = "";
  for(int i = 0;i<lcm/n1;i++) r1+=s1; 
  for(int i = 0;i<lcm/n2;i++) r2+=s2; 
  if(r1==r2) cout<<r1<<"\n";
  else cout<<-1<<"\n";
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}