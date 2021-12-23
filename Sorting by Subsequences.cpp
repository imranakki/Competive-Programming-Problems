#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

const int N = 1e6 + 11;


int main(){
    cout << setprecision(15);
    ll n;
    cin >> n;
    ll a[N];
    vector<pair<ll, ll>> t(n);
    for_n(i, 0, n){
        cin >> t[i].first;
        t[i].second = i;
    }
    sort(t.begin(), t.end(), [](pair<ll, ll> a, pair<ll, ll> b){
        return a.first < b.first;
    });
    v(v(ll)) s;
    for_n(i, 0, n){
        if(a[i] == 1) continue;
        v(ll) g;
        ll pos = i;
        while(a[pos] == 0){
            g.push_back(pos+1);
            a[pos] = 1;
            pos = t[pos].second;
        }
        s.push_back(g);
    }
    cout << s.size() << endl ;
    for(auto g : s){
        cout << g.size();
        for(auto u : g){
            cout << " " << u;
        }
        cout << endl;
    }
    return 0;
}