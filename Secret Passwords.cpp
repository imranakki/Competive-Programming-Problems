#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

const int N = 1000005;
v(ll) vex[N];
ll visited[N];

void dfs(ll u) {
    for (ll o : vex[u]) {
        if (!visited[o]) {
            visited[o] = 1;
            dfs(o);
        }
    }
}

int main(){
    ll n;
    cin >> n;
    for(ll i = 1; i <= n; i++) {
        string s;
        cin >> s;
        for(char c : s) {
            vex[i].push_back(n + 1 + (c - 'a'));
            vex[n + 1 + (c - 'a')].push_back(i);
        }
    }

    ll ans = 0;
    for(ll i = 1; i <= n; i++) {
        if(!visited[i]) {
            dfs(i);
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}