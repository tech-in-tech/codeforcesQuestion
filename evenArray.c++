#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int minSwap(vector<int> &vec,int n){
  int swapCount = 0;
  int evenCount = 0;
  int oddCount = 0;
  // count even and odd count
  for(auto ele:vec){
    if(ele%2==0) evenCount++;
    else oddCount++;
  }
  if(n%2==0 && (evenCount!=n/2)){
    return -1;
  }
  else if(n%2!=0 && (evenCount!=(n/2)+1)){
    return -1;
  }
  
  else{
    int i = 0;
    int j = 1;
    while(j<n and i<n){
      if(vec[j]%2!=0){
        j+=2;
      }
      else if(vec[i]%2==0){
        i+=2;
      }
      else{
        swap(vec[i],vec[j]);
        i+=2;
        j+=2;
        swapCount++;
      }
    }
  }
  return swapCount;
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i = 0;i<n;i++){
      cin>>vec[i];
    }
    cout<<minSwap(vec,n)<<"\n";
  }
  return 0;
}



// 0 1 2 3 
// 3 2 7 6