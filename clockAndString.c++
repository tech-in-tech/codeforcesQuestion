#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long  a,b,c,d;
    cin>>a>>b>>c>>d;
    if(d<c){
      swap(c,d);
    }
    if(c<a and a<d){
      if(c<b and b<d) cout<<"NO\n";
      else cout<<"YES\n";
    }
    else if(c<b and b<d){
      if(c<a and a<d) cout<<"NO\n";
      else cout<<"YES\n";
    }
    else cout<<"NO\n";
  }
  return 0;
}