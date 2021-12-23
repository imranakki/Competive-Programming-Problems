#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

const int N = 200000;
v(ll) vex[N];
ll visited[N];
ll edges = 0, ve = 0;
void dfs(ll x) {
    edges += vex[x].size();
    visited[x] = 1;
    ++ve;
    for (auto i : vex[x]) {
        if (!visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    
    ll n, m;
    cin >> n >> m;
    for_n(i, 0, m) {
        ll a, b;
        cin >> a >> b;
        vex[a].push_back(b);
        vex[b].push_back(a);
    }
    
    for_n(i, 1, n + 1) {
        if (!visited[i]) {
            ve = 0, edges = 0;
            dfs(i);
            if(edges != ve * (ve - 1)) {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
}