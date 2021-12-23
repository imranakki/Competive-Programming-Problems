#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

int main(){
    ll n;
    cin >> n;
    while(n--){
        unordered_set<int> l;
        ll t;
        cin >> t;

        l.insert(0);
        for(int i = 1; i <= sqrt(t) + 1; i++){
            int x = t / i;
            l.insert(x);
            if(x) l.insert(t / x);
            
        }
        v(ll) vv(l.begin(), l.end());
        sort(vv.begin(), vv.end());
        cout << vv.size() << endl;
        for(ll i : vv){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}