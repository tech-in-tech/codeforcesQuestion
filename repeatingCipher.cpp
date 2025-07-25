#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
  int n;
  cin>>n;
  string t;
  cin>>t;
  string ans = "";
  int i = 0;
  int idx = 1;
  while(i<t.size()){
    ans+=t[i];
    i+=idx;
    idx++;
  }

  cout<<ans<<"\n";

  /*
  0 1 2 3 4 5 
  b a a b b b
  */

  return 0;
}

/* 
i = 15;
idx = 6;
ans = "abcdef"
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35
a b b c c c d d d d  e  e  e  e  e  f  f  f  f  f  f  g  g  g  g  g  g  g  h  h  h  h  h  h  h  h 

1 2 4 7 11 16 22 29

*/