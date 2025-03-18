#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long findPow(long long a,long long b,long long n){
  
  if(b==0) return 1; 
  if(b==1) return a;
  long long x = findPow(a,b/2,n)%n;
  long long p = 0;
  
  if(b%2==1){
    p = (x%n*x%n)%n;
    p = (p%n*a%n)%n;
  }

  else{
    p = (x%n*x%n)%n;
  }
  return p;
}

void solve(){ 
  long long n,k;
  cin>>n>>k;
  cout<<findPow(n,k,1000000007)<<"\n";
  
}
int main(){
  long long t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}