#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int count = 0;
  int a,b;
  int res = 0;
  for(int i = 0;i<n;i++){
    cin>>a>>b;
    count-=a;
    count+=b;
    res = max(res,count);
  }
  cout<<res;
  return 0;
}