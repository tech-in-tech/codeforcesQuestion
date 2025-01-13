#include<iostream>
#include<vector>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int> vec(7);
  for(int i = 0;i<7;i++){
    cin>>vec[i];
  }
  int i = 0;
  while(n>0){
    n-=vec[i];
    if(n<=0) break;
    i++;
    i = i%7;
  }
  cout<<(i+1)<<"\n";
  return 0;
}