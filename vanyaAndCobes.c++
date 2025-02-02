#include<iostream>
using namespace std;
int sum(int n){
  return (n*(n+1))/2;
}
int main(){
  int n;
  cin>>n;
  int level = 0;
  while(true){
    n-=sum(level+1);
    if(n>=0) level++;
    else break;
  }
  cout<<level<<"\n";
  return 0;
}




/* 25
1 =1 
1+2 =3
1+2+3 = 6
1+2+3+4 = 10
1+2+3+4+5 = 15 */