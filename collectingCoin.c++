#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int a, b, c, n;
    cin>>a>>b>>c>>n;
    int sum = a + b + c + n;
    int max_candies = max(a, max(b, c));
    if (sum % 3 == 0 && max_candies <= sum / 3)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
  return 0;
}
