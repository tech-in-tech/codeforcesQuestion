#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  string games;
  cin>>games;
  int countA = 0;
  int countD = 0;
  for(auto ele:games){
    if(ele=='A'){
      countA++;
    }
    else if(ele=='D'){
      countD++;
    }
  }
  if(countD>countA){
    cout<<"Danik\n";
  }
  else if(countD<countA){
    cout<<"Anton\n";
  }
  else{
    cout<<"Friendship\n";
  }
  return 0;
}

