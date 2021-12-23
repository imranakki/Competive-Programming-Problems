#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;


int main(){
    ll n;
    cin >> n;
    for_n(i, 0, n){
        string s;
        cin >> s;
        for(ll i = s.size() - 1; i >= 0; i--){
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
