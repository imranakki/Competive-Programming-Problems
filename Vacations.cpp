#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

int main(){
    ll n;
    cin >> n;
    v(ll) a;
    for_n(i, 0, n){
        ll x;
        cin >> x;
        a.push_back(x);
    }
    v(v(ll)) dp (n , v(ll)(3));
    if(a[0] == 1 || a[0] == 3) {
        dp[0][1]++;
    }
    if (a[0] == 2 || a[0] == 3) {
        dp[0][2]++;
    }
    for_n(i, 1, n) {
        dp[i][0] = max(dp[i-1][0], max(dp[i-1][1], dp[i-1][2]));
        dp[i][1] = max(dp[i-1][0], dp[i-1][2]);
        if(a[i] == 1 || a[i] == 3) {
            dp[i][1]++;
        }
        dp[i][2] = max(dp[i-1][0], dp[i-1][1]);
        if (a[i] == 2 || a[i] == 3) {
            dp[i][2]++;
        }
    }
    cout << n - max(dp[n-1][0], max(dp[n-1][1], dp[n-1][2])) << endl;
    return 0;
}