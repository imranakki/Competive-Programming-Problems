#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

int main(){
    string s;
    cin >> s;
    for_n(i, 0, s.size()){
        if (s[i] == 'w' || s[i] == 'm')
        {
            cout << 0 << endl;
            return 0;
        }
    }
    v(ll) dp(s.size() + 1);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i <= s.size(); ++i)
    {
        dp[i] = dp[i - 1];
        if (s[i - 1] == s[i - 2] && (s[i - 1] == 'u' || s[i - 1] == 'n'))
            dp[i] = (dp[i] + dp[i - 2]) % 1000000007;
    }
    
    cout << dp[s.size()] << endl;
    return 0;
}