#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;


int main() {
    ll n;
    cin >> n;
    v(ll) a(n);
    for_n(i, 0, n) cin >> a[i];
    ll pair = 0, impair = 0, pos = 0, neg = 0;
    for_n(i, 0, n){
        if (a[i] % 2 == 0) pair++;
        else impair++;
        if (a[i] > 0) pos++;
        else if(a[i] < 0) neg++;
    }
    cout << "Pair: " << pair << endl;
    cout << "Impair: " << impair << endl;
    cout << "Positif: " << pos << endl;
    cout << "Negatif: " << neg << endl;
}