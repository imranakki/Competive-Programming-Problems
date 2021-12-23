#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;


int main(){
    string s;
    cin >> s;
    if(s.size() <= 0 || s.size() > 26) return 0;
    if(count(s.begin(), s.end(), 'c'))
        cout << "Stay Home" << endl;
    else cout << "Safe" << endl;
    return 0;
}