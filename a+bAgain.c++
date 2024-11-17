#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int num;
    cin>>num;
    int digitSum = 0;
    while(num){
      int rem  = num%10;
      digitSum+=rem;
      num/=10;
    }
    cout<<digitSum<<"\n";
  }
  return 0;
}