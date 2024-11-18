#include<iostream>
#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
bool translation(string s,string t){
  reverse(s.begin(),s.end());
  return (s==t);
}
int main(){
  string s,t;
  cin>>s>>t;
  translation(s,t)?cout<<"YES":cout<<"NO";
  return 0;
}