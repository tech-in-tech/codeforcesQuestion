#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(){

  int x;
  cin>>x;
  string n = to_string(x);
  int rem = x%10;
  int addition = (rem-1)*10;  

  /* 
  777
  rem = 7
  addition = 60
  */
 /*  4 = 10
  3 = 7
  2 = 3
  1 = 1 */
  int ans = 0;
  if(n.size()==1){
    ans = addition+1;
  }
  if(n.size()==2) ans = addition+3;
  if(n.size()==3) ans = addition+6;
  if(n.size()==4) ans = addition+10;

  cout<<ans<<"\n";

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
1 11 111 1111 2 22 222 2222 3 33 333 3333 4 44 444 4444 5 55 555 5555 6 66 666 6666 7 77 777 7777 8 88 888 8888 9 99 999 9999
1 2 3 4    1 2 3 4     1 2 3 4    1 2 3 4     1 2 3 4     1 2 3 4     1 2 3 4    1 2 3 4     1 2 3 4 
*/

/* 
1 11 111 1111 2 22 222 2222 3 33 333 3333 4 44 444 4444 5 55 555 5555 6 66 666 6666 7 77 777
*/