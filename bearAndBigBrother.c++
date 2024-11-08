#include<iostream>
using namespace std;
int main(){
  int a,b;
  cin>>a>>b;
  int year = 0;
  while(a<=b){
    a*=3;
    b*=2;
    year++;
  }
  cout<<year;
  return 0;
}

// 4 7    y= 0;
// 1   -  4*3 = 12 ; 14
// 2   -  36 ; 28