#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

const int N = 1e6 + 5;
v(ll) vex[N];
ll visited[N], cnt;
bool wcdc = true;
void dfs(ll x) {
    visited[x] = 1;
    if(vex[x].size() != 2) wcdc = false;
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
    cnt = 0;
    for(ll i = 1; i <= n; i++) {
        wcdc = true;
        if(!visited[i]) {
            dfs(i);
            if(wcdc) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}