#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;


int main(){
    ll n, k;
    cin >> n >> k;
    string s;
    for_n(i, 0, n) {
        s += 'a' + (i % k);
    }
    cout << s << endl;
}