// (x<<i) = x*2^i;
// i zeros will add at the end
// (x>>i) = x*2^i;
// i bits will remove at the end
// left shift
/* #include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  cout<<(n<<3); 
  return 0;
} */

// right shift
#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  cout<<(n>>2);
  return 0;
}