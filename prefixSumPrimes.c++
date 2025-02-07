#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int ones = 0;
  int tows = 0;
  for(int i = 0;i<n;i++){
    int x;
    cin>>x;
    if(x==1) ones++;
    else tows++;
  }
  if(tows==0) {
    for(int i = 0;i<ones;i++) cout<<"1 ";
  }
  else if(ones==0) {
    for(int i = 0;i<tows;i++) cout<<"2 ";
  }
  else{
    cout<<"2 1 ";
    for(int i = 0;i<tows-1;i++) cout<<"2 ";
    for(int i = 0;i<ones-1;i++) cout<<"1 ";
  }
  return 0;
}