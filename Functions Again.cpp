#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

void print(v(ll) v) {
    for (ll i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}


int main(){
    ll n;
    cin >> n;
    v(ll) a(100000);
    for(ll i = 1; i <= n; i++) cin >> a[i];
    ll s = 0, m = 0, l = 1;
    for_n(i, 1, n){

        if((i-l) % 2 == 0){
            s += abs(a[i] - a[i + 1]);
        }else{
            s -= abs(a[i] - a[i + 1]);
        }
        if(s > m) m = s;
        if(s < 0) {
            s = 0;
            i = l++;
        }
    }
    cout << m << endl;
    return 0;
}