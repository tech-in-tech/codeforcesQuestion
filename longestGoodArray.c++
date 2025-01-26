#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long l,r;
    cin>>l>>r;
    const long long diff = r-l;
    long long i = 0,ans = 0;
    while(i*(i-1)/2<=diff){
      ans = i;
      i++;
    }
    cout<<ans<<"\n";
  }
  return 0;
}
