#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

ll n, m, k;

bool detect(ll a, ll n, ll m, ll k) {
    ll t = a-k > 0 ? a-k : 0;
    ll s = a-n+k-1 > 0 ? a-n+k-1 : 0;
    return a*(a+1)/2 - t*(t+1)/2 + (a-1)*a/2 - s*(s+1)/2 <= m-n;
}

ll BinarySearch(ll l, ll r){
    ll mid = l + (r-l)/2;
    if(detect(mid, n, m, k)){
        if(l >= r-1) return mid;
        return BinarySearch(mid, r);
    }
    return BinarySearch(l, mid);
}

int main(){
    cin >> n >> m >> k;
    cout << BinarySearch(0, m) + 1 << endl;
    return 0;
}