#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

void print(v(ll) &v){
    for_n(i, 0, v.size()){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    ll n;
    cin >> n;
    v(ll) num(n), fnum;
    for_n(i, 0, n) cin >> num[i];
    for_n(i, 0, n){
        if(i == 0) fnum.push_back(num[i] * num[i + 1]);
        else if(i == n-1) fnum.push_back(num[i - 1] * num[i]);
        else fnum.push_back(num[i - 1] * num[i + 1]);
    }
    print(fnum);
    return 0;
}