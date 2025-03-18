#include <iostream>
#include <vector>
using namespace std;


void solve() {
    long long n, x;
    cin >> n >> x;
    vector<long long> a(n);
    long long s = 0;
    for(long long i = 0;i<n;i++){
        cin>>a[i];
    }
    for(auto ele:a){
        s+=ele;
    }
    if(s==x*n){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }

}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}