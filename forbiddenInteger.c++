#include<iostream>
using namespace std;
void solve(){
  long long n,k,x;
  cin>>n>>k>>x;
  if(k==1){
    cout<<"NO\n";
    return ;
  } 
  if(x!=1){
    cout<<"YES\n";
    cout<<n<<"\n";
    for(long long i = 0;i<n;i++){
      cout<<"1 ";
    }
    cout<<"\n";
    return ;
  }
  if(n%2 and k==2){
    cout<<"NO\n";
    return ;
  }
  if(n%2==0){
    cout<<"YES\n";
    cout<<(n/2)<<"\n";
    for(long long i = 0;i<(n/2);i++){
      cout<<"2 ";
    }
    cout<<"\n";
    return;
  }
  long long tot = (n/2);
  cout<<"YES\n";
  cout<<tot<<"\n";
  for(long long i= 0;i<(n/2-1);i++){
    cout<<"2 ";
  }
  cout<<"3 ";
  cout<<"\n";
}
int main(){
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}