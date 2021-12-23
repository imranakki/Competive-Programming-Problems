#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

int main(){
    ll n;
    cin >> n;
    for_n(i, 0, n){
        ll int a;
        cin >> a;
        a -= 1;
        int mod = 1000000007;
        a = a % mod;
        ll na = (a*(a+1))/2;
        na+=1;
        cout << na % mod << endl;
    }
    return 0;
}