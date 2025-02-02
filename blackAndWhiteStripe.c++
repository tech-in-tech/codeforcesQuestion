#include <iostream>
#include <vector>
using namespace std;
void solve() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> v(n+1);
    v[0] = 0;
    for(int j =0;j<n;j++){
      v[j+1] = v[j];
      if(s[j]=='W'){
        v[j+1]++;
      }
    }
    int ans = n;
    for(int j = 0;j<=n-k;j++){
      ans = min(ans,v[j+k]-v[j]);
    }
    cout<<ans<<"\n";

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
