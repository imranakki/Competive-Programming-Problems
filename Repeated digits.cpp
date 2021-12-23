#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;


int main(){
    ll n;
    cin >> n;
    v(ll) a;
    ll t = 0;
    for_n(i, 0, n){
        ll x;
        cin >> x;
        t ^= x;
    }
    cout << t  << endl;
    return 0;
}