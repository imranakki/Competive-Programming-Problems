#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

ll fibonachi(ll n, v(ll)* m) {
    ll res;
    if(n < 1) return n;
    if(!m->at(n)) {
        m->at(n) = (fibonachi(n - 1, m) + fibonachi(n - 2, m)) % 1000000007;
    }
    return abs(m->at(n));
}

int main(){
    ll n;
    cin >> n;
    v(ll) m(10000000);
    for_n(i, 0, n){
        ll a;
        cin >> a;
        cout << fibonachi(a, &m) << endl; 
    }
    return 0;
}