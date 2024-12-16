#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int countA = 0,countB = 0;
    for(auto ele:s){
      if(ele=='A') countA++;
      else countB++;
    }
    if(countA>=3){
      cout<<"A\n";
    }
    else{
      cout<<"B\n";
    }
  }
  return 0;
}