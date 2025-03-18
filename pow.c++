#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findPow(int a,int b,int n = 1000000007){
  int p = 0;

  if(b==0) return 1; 
  if(b==1) return a;
  int x = findPow(a,b/2,n)%n;

  if(b%2==1){
    p = ((x%n)*(x%n))%n;
    p = ((p%n)*(a%n))%n;
  }

  if(b%2==0){
    p = x*x;
  }
  return p;
}
int main(){
  int a,b;
  cin>>a>>b;
  int n = 100;
  cout<<findPow(a,b,n);
  return 0;
}