#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

int main(){
    ll k1, k2, k3;
    v(ll) a(3);
    cin >> k1 >> k2 >> k3;
    a.push_back(k1);
    a.push_back(k2);
    a.push_back(k3);
    if(count(a.begin(), a.end(), 1) >= 1) cout << "YES" << endl;
    else if (count(a.begin(), a.end(), 2) >= 2) cout << "YES" << endl;
    else if (count(a.begin(), a.end(), 3) >= 3) cout << "YES" << endl;
    else if(count(a.begin(), a.end(), 4) >= 2 && count(a.begin(), a.end(), 2) >= 1) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}