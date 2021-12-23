#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

int main()
{
    ll n, x, k;
    cin >> n >> x;
    v(ll) cherries(n);
    for(auto &t: cherries) cin >> t;
    cin >> k;
    v(ll) types(k);
    for(auto &t: types) cin >> t;
    for_n(i, 0, n){
        for(auto &t: types){
            if(i == t - 1){
                cherries[i] = 0;
            }
        }
    }
    ll cnt = 0;
    for(auto &t: cherries){
        cnt += t;
    }
    cout << cnt + 1 << endl;
    return 0;
}