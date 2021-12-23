#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

int main(){
    ll X1, X2, V1, V2, T1, T2;
    cin >> X1 >> V1 >> X2 >> V2;
    T1 = X1 + V1;
    T2 = X2 + V2;
    ll i = 10000;
    while(i--){
        if(T1 == T2){
            cout << "OUI" << endl;
            return 0;
        }
        T1 += V1;
        T2 += V2;
    }
    cout << "NON" << endl;
}