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
    string s1, s2;
    cin >> s1 >> s2;
    
    ll cnt = 0;
    for_n(i, 0, n){
        if(s1[i] != s2[i]) cnt++;
    }
    cout << cnt << endl;
}