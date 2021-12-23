#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

int main(){
    ll n, m;
    cin >> n >> m;
    v(ll) a,b;
    for_n(i, 0, n){
        ll x;
        cin >> x;
        if(x <= 1){
            cout << -1 << endl;
            return 0;
        }
        a.push_back(x);
    }
    for_n(i, 0, n){
        ll x;
        cin >> x;
        if(x <= 1){
            cout << -1 << endl;
            return 0;
        }
        b.push_back(x);
    }
    double s = m;
    s += s / (a[0] - 1);
    for(ll i = n-1; i >= 1; i--){
        s += s / (a[i] - 1);
        s += s / (b[i] - 1);
    }
    s += s / (b[0] - 1);
    cout  << setprecision(10) << fixed << s - m << endl;
    return 0;
}