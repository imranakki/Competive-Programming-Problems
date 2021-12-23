#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

bool ncows(ll n, ll a, ll stalls[], ll cows) {
    ll c = 1;
    ll index = 0;
    for_n(i, 1, n) {
        if (stalls[i] - stalls[index] >= a) {
            c++;
            index = i;
            if (cows == c) {
                return true;
            }
        }
    }
    return false;
}



int main(){
    ll t, n, c;
    cin >> t;
    while(t--){
        cin >> n >> c;
        ll stalls[n];
        for_n(i, 0, n) cin >> stalls[i];
        sort(stalls, stalls + n);
        
        ll l = 0, r = stalls[n-1];
        ll ans = -1;
        while(l < r){
            
            ll mid = l + (r - l) / 2 ;
            //cout << r << endl;
            if(ncows(n, mid, stalls, c))
            {
                ans=max(ans, mid);
                l = mid + 1;
            }
            else
            {
                r = mid;
            }
        }
        cout << ans << endl;
        
    }
    return 0;
}