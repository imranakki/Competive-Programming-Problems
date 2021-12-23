#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;
void print(v(ll) v) {
  for (ll i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;
}

int main(){
    ll m, n;
    cin >> m >> n;
    ll prix = 0;
    for_n(i, 0, n){
        ll q, p;
        cin >> q >> p;
        prix += (q * p);
    }
    ll ans = m - prix >= 0 ? 1 : 0;
    cout << ans << endl;
}