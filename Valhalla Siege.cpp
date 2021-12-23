#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

int main(){
    ll n, q;
    cin >> n >> q;
    v(ll) a(n);
    cin >> a[0];
    for_n(i, 1, n) {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    ll cnt = 0;
    for_n(i, 0, q) {
        ll k;
        cin >> k;
        //cnt = 0;
        cnt += k;
        ll l = 0, r = n - 1, ans = 0;
        while (l <= r) {
            ll m = (l + r) / 2;
            if(a[m] > cnt){
                ans = n - m;
                r = m - 1;
            }else{
                l = m + 1;
            }
        }
        if (ans == 0) {
            ans = n;
            cnt = 0;
        }
        cout << ans << endl;
    }
    
    return 0;
}