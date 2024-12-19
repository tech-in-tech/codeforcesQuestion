#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while (t--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    if(a!=b and a!=c) cout<<a<<"\n";
    else if(b!=a and b!=c) cout<<b<<"\n";
    else cout<<c<<"\n";
  }
  
  return 0;
}