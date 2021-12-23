#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

int main(){
    ll n;
    cin >> n;
    for_n(q, 0, n){
        string num;
        cin >> num;

        v(ll) pair, impair;
        for_n(i,0, num.size()){
            ll x = num[i] - '0';
            if (x % 2 == 0)
                pair.push_back(x);
            else
                impair.push_back(x);
        }
        ll i = 0, j = 0;
        while (i < pair.size() || j < impair.size()){
            if(i < pair.size() && j < impair.size()){
                if (pair[i] < impair[j]){
                    cout << pair[i];
                    i++;
                    continue;
                }
                else{
                    cout << impair[j];
                    j++;
                    continue;
                }
            }
            else if (i < pair.size()){
                cout << pair[i];
                i++;
                continue;
            }
            else{
                cout << impair[j];
                j++;
                continue;
            }
            i++;
            j++;
        }
        cout << endl;
    }

}