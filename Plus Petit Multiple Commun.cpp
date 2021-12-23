#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

ll ppcm(ll a, ll b){
    return a * b / __gcd(a, b);
}

int main()
{
    ll m, n;
    cin >> m >> n;
    cout << ppcm(m, n) << endl;
    return 0;
}