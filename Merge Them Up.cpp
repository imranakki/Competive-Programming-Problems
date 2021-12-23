#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;


int main(){
    ll n, m;
    cin >> n >> m;
    v(ll) a;
    v(ll) b;
    for_n(i, 0, n){
        ll x;
        cin >> x;
        a.push_back(x);
    }
    for_n(i, 0, m){
        ll x;
        cin >> x;
        b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    bool h = false;
    ll i = 0,j = 0;
    while(i < n && j < m){
        if(a[i] < b[j]) {
            i++;
        }
        else if (a[i] > b[j]) {
            j++;
        } else {
            cout << a[i] << " ";
            h = true;
            i++;
            j++;
        }
    }
    if(!h) cout << "Empty" << endl;
    return 0;
}
