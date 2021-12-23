#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

ll pgcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return pgcd(b, a % b);
}

int main()
{
    ll a, b, n;
    cin >> a >> b >> n;
    bool IsAyoubFirst = true;
    bool IsAyoubWin;
    while (true)
    {
        if (IsAyoubFirst)
        {
            ll g = pgcd(a, n);
            n -= g;
            if(n < 0){
                IsAyoubWin = false;
                break;
            }
            IsAyoubFirst = false;
        }
        else
        {
            ll g = pgcd(b, n);
            n -= g;
            if(n < 0){
                IsAyoubWin = true;
                break;
            }
            IsAyoubFirst = true;
        }
    }
    ll ans = IsAyoubWin ? 0 : 1;
    cout << ans << endl;
}