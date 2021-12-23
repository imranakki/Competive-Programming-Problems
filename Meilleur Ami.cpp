#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

void print(v(double) &v){
    for_n(i, 0, v.size()){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    ll n;
    cin >> n;
    v(double) amis;
    while(n--){
        double f, se, sy;
        cin >> f >> se >> sy;
        f *= 0.65;
        se *= 0.1;
        sy *= 0.25;
        amis.push_back(f + se + sy);
    }
    ll max_index = distance(amis.begin(), max_element(amis.begin(), amis.end()));
    cout << max_index + 1 << endl;
}