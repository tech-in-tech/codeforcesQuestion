#include <iostream>
#include <queue>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    priority_queue<ll> pq; 

    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        pq.push(x);
    }

    while (pq.size() > 1) {
        ll l = pq.top(); pq.pop(); 
        ll sl = pq.top(); pq.pop(); 
        ll x = (l + sl) - 1; 
        pq.push(x); 
    }

    cout << pq.top() << "\n"; 
}

int main() {
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
