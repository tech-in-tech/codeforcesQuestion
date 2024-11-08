#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  string s;
  cin>>s;
  int removeCharCount = 0;
  for(int i = 1;i<n;i++){
    if(s[i]==s[i-1]){
      removeCharCount+=1;
    }
  }
  cout<<removeCharCount;
  return 0;
}


// b r g b b r g g r b r r b g   r= 1
//             i