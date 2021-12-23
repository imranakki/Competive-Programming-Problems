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
    v(ll) t;
    for_n(i, 0, n){
        ll x;
        cin >> x;
        t.push_back(x);
    }
    //print(t);
    ll aliceBars = 0, bobBars = 0;
    ll aliceSpeed = 0, bobSpeed = 0;
    ll i = 0, j = n - 1;
    while(i <= j){
        // Alice is the first to get a bar
        if(aliceSpeed <= bobSpeed){
            aliceBars++;
            aliceSpeed += t[i];
            i++;
        }
        else{
            bobBars++;
            bobSpeed += t[j];
            j--;
        }
    }
    cout << aliceBars << " " << bobBars << endl;

    return 0;
}