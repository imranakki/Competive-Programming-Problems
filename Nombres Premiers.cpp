#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

bool isPrime(ll n) {
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    ll n;
    cin >> n;
    for (ll i = 2; i * i <= n; i++) {
        if (isPrime(i)) {
            if (isPrime(n - i)) {
                cout << i << " " << n - i << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}