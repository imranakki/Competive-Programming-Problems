#include <bits/stdc++.h>
#define for_n(i, a, n) for (int i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll q;
    cin >> q;
    while(q--){
        ll c,m,x;
        cin >> c >> m >> x;
        ll div = (c+m+x) / 3;
        if(div <= min(c,m)){
            cout << div << endl;
        }else{
            cout << min(c,m) << endl;
        }
    }
}