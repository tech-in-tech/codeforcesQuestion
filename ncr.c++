#include<iostream>
using namespace std;
int fact(int n){
  if(n==0) return 1;
  int p = 1;
  for(int i = 1;i<=n;i++){
    p*=i;
  }
  return p;

}

int ncr(int n,int r){
  if(r==0 || n==r) return 1;
  if(r>n){
    return 0;
  }
  return fact(n)/(fact(r)*fact(n-r));
}
int main(){
  int n,r;
  cin>>n>>r;
  cout<<ncr(n,r);
  return 0;
}