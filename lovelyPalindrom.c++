#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  string ans = s;
  reverse(s.begin(),s.end());
  cout<<ans+s<<"\n";
  return 0;
}