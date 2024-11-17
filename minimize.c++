#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b;
    cin>>a>>b;
    int minVal = 1000;
    for(int i = a;i<=b;i++){
      int expretion = (i-a)+(b-i);
      minVal = min(minVal,expretion);
    }
  cout<<minVal<<"\n";
  }
  return 0;
}