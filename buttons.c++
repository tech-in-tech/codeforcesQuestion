#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int sum = n;
  for(int i = 1;i<n;i++) sum+=(n-i)*i;
  cout<<sum;
  return 0;
}


// 1 2
// 1 1 
// 1 2 3 4 5 6 
// 6 5 4 3 2 1

// 1 2 3
// 2 2 2
