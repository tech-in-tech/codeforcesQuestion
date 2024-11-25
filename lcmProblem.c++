#include<iostream>
using namespace std;
int main(){
  int t,l,r,x,y;
  cin>>t;
  while(t--){
    cin>>l>>r;
    x = l;
    y = l*2;
    if(y<=r) cout<<x<<" "<<y<<"\n";
    else cout<<-1<<" "<<-1<<endl;
  }
  return 0;
}