#include<iostream>
using namespace std;
int main(){
  string s1,s2;
  cin>>s1>>s2;
  int res = s1.compare(s2);
  if(res==0){
    cout<<s1<<"\n";
  }
  else if(res>0) cout<<s2<<"\n";
  else cout<<s1<<"\n";
  return 0;
}