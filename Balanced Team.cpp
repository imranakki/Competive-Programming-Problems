#include <bits/stdc++.h>
#define for_n(i, a, n) for (int i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

void print(v(ll) v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll a;
    cin >> a;
    v(ll) sb;
    for_n(i, 0, a) {
        ll x;
        cin >> x;
        sb.push_back(x);
    }
    sort(sb.begin(), sb.end());
    ll cnt = 0;
    for_n(i, 0, a) {
        ll left, right, target;
        left = 0;
        right = a - 1;
        target = sb[i] + 5;
        while (left < right) {
            ll mid = ((left + right) / 2) + 1;
            if (sb[mid] > target) {
                right = mid - 1;
            } else {
                left = mid ;
            }
        }
        cnt = max(cnt, left - i + 1);
    }
    cout << cnt << endl;
}
