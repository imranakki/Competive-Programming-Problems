#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

void print_set(set<ll> s) {
    for (auto x : s) {
        cout << x << " ";
    }
    cout << endl;
}


int main(){
    string s;
    cin >> s;
    ll n = s.size(), i = 0, j = 1, c = 1;
    while (i < n && j < n) {
        if(s[i] == s[j]){
            i++;
            c++;
            j++;
        }else{
            cout << c << s[i];
            c = 1;
            i++;
            j++;
        }
    }
    cout << c << s[i] << endl;

    return 0;
}