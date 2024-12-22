#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    if(n==1){
      cout<<1<<"\n";
    }
    else if(n==2){
      cout<<2<<"\n";
    }
    else if(n==3){
      cout<<2<<"\n";
    }
    else if(n==4){
      cout<<2<<"\n";
    }
    else{
      int sum= 4,ans = 2;
      while(sum<n){
        ans++;
        sum++;
        sum*=2;
      }
      cout<<ans<<"\n";
    }
  }
  return 0;
}