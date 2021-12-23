#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;


int main(){
    ll n;
    cin >> n;
    for_n(i, 0, n){
        string wu, wd;
        cin >> wu >> wd;
        if(wu[wu.size() - 1] != wd[wu.size() - 1] || wu[0] != wd[0] || wu.size() != wd.size()){
            cout << "Azuz is not my leader" << endl;
            continue;
        }
        sort(wu.begin(), wu.end());
        sort(wd.begin(), wd.end());
        if(wu == wd){
            cout << "Awesome anagram" << endl;
            continue;
        }
        cout << "Azuz is not my leader" << endl;
    }
    return 0;
}