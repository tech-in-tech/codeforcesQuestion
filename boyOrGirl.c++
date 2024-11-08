#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
  string s;
  cin>>s;
  unordered_map<char,int> mp;
  for(auto ele:s){
    mp[ele]++;
  }

  if(mp.size()%2==0){
    cout<<"CHAT WITH HER!";
  }
  else{
    cout<<"IGNORE HIM!";
  }
  return 0;
}



