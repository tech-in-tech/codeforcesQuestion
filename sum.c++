#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while (t--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    int ab = a+b;
    int bc = c+b;
    int ca = a+c;
    if(c==ab){
      cout<<"YES\n";
    }
    else if(a==bc){
      cout<<"YES\n";
    }
    else if(b==ca){
      cout<<"YES\n";
    }
    else{
      cout<<"NO\n";
    }
  }
  return 0;
}