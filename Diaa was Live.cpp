#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

int main(){
    ll n;
    cin >> n;
    
    while(n--){
        long double f = 1;
        ll m;
        cin >> m;
        for_n(i, 0, m){
            ll x;
            cin >> x;
            f += log10(x);
        }
        cout << (int)f << endl;
    }
    
    return 0;
}