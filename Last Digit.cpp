#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;


int main(){
    ll n;
    cin >> n;
    
    for_n(i, 0, n){
        ll a;
        cin >> a;
        ll f = 0;
        if(a == 0) f = 1;
        else if (a == 3) f = 6;
        else if (a <= 2) f = a;
        else if(a == 4) f = 4;
        cout << f << endl;
    }
    return 0;
}