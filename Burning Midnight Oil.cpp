#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

ll getn(ll n, ll k) {
    ll ans = 0, i = 1;
    while(n >= i) {
        ans += n / i;
        i *= k;
    }
    return ans;
}

int main(){
    ll n, k;
    cin >> n >> k;
    ll l = 0, r = n;
    while(l < r) {
        ll mid = (l + r) / 2;
        if(getn(mid, k) > n) r = mid;
        else if(getn(mid, k) < n) l = mid + 1;
        else {
            cout << mid << endl;
            return 0;
        }
    }
    cout << l << endl;
    return 0;
}