#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

const int N = 1e6 + 5;
ll visited[N], vex[N], vey[N], n, cnt = -1;
void dfs(ll x) {
    visited[x] = 1;
    for(ll i = 1; i <= n; i++) {
        if((vex[x] == vex[i] || vey[x] == vey[i]) && !visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    cin >> n;
    for(ll i = 1; i <= n; i++) cin >> vex[i] >> vey[i];
    for(ll i = 1; i <= n; i++) {
        if(!visited[i]) {
            cnt++;
            dfs(i);
        }
    }
    cout << cnt << endl;
    return 0;
}