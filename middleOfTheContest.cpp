#include<iostream>
using namespace std;

void solve(){
  char c;
  int h1,m1,h2,m2;
  cin>>h1>>c>>m1;
  cin>>h2>>c>>m2;           
  int min1 = h1*60+m1;
  int min2 = h2*60+m2;
  int mid = (min1+min2)/2;
  int hrs = mid/60;
  int mins = mid%60;
  if(hrs>9 && mins>9){
    cout<<hrs<<":"<<mins<<"\n";
  }
  else{
    if(hrs<10) cout<<0;
    cout<<hrs<<":";
    if(mins<10) cout<<0;
    cout<<mins<<"\n";
  }
   
}
int main(){
  solve();
  return 0;
}


/* 
10:12
11:7
*/