#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    (n%2==0)?cout<<"Sakurako\n":cout<<"Kosuke\n";
  }
  return 0;
}