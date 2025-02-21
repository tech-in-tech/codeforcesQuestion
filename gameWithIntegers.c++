#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    (n%3!=0)?cout<<"First\n":cout<<"Second\n";
  }
  return 0;
}