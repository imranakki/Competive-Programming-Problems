#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;
void print(v(ll) v) {
  for (ll i = 0; i < v.size(); i++) {
    cout << v[i] << endl;
  }
  cout << endl;
}

int main(){
    ll x;
    cin >> x;
    v(ll) divisors;
    ll i = 1;
    while(i * i <= x){
        if(x % i == 0){
        divisors.push_back(i);
        if(i != x / i)
            divisors.push_back(x / i);
        }
        i++;
    }
    sort(divisors.begin(), divisors.end());
    print(divisors);
}