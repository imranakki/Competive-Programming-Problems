#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

double diffMax;
ll nb;
void print(v(double) &v){
    for_n(i, 0, v.size()){
        cout << v[i] << " ";
    }
    cout << endl;
}

bool Check(v(double) mesures){
    for_n(i, 0, mesures.size() - 1){
        if(abs(mesures[i] - mesures[i + 1]) > diffMax){
            return false;
        }
    }
    return true;
}

ll Lissage(v(double) mesures){
    v(double) new_mesures;
    new_mesures.push_back(mesures[0]);
    for_n(i, 1, mesures.size() - 1){
        new_mesures.push_back((mesures[i - 1] + mesures[i + 1]) / 2);
    }
    new_mesures.push_back(mesures[mesures.size() - 1]);
    nb++;
    if (!Check(new_mesures)) Lissage(new_mesures);
    return nb;
}


int main(){
    ll nbMesures;
    cin >> nbMesures >> diffMax;
    v(double) mesures(nbMesures);
    for(auto &t : mesures) cin >> t;
    cout << Lissage(mesures) << endl;

}