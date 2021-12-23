#include <bits/stdc++.h>
#define for_n(i, a, n) for (ll i = a; i < n; i++)
#define ll long long
#define v(t) vector<t>
using namespace std;

void print_v(v(char) v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

string detect(string s, ll left, ll right)
{
    string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    if (1 <= s.size() && s.size() <= 500000)
    {
        //v(char) vs;
        v(int) vn;
        for_n(i, left, right)
        {

            if (s[i] == '?') vn.push_back(i);
            else continue;
        }
        
        for_n(i, left, right)
        {
            for_n(j, 0, 26)
            {
                if (s[i] == alpha[j])
                {
                    alpha.erase(alpha.begin() + j);
                }
            }
        }
        if (alpha.size() != vn.size())
        {
            return "-1";
        }
        for_n(i, 0, vn.size())
        {
            s[vn[i]] = alpha[i];
        }
    }
    return s;
}

int main()
{
    string s;
    cin >> s;
    ll left, right;
    string fs = "-1";
    left = 0;
    right = 26;
    if (s.size() < 26)
    {
        cout << "-1" << endl;
        return 0;
    }
    while (right <= s.size())
    {
        fs = detect(s, left, right);
        if (fs != "-1")
        {
            break;
        }
        left++;
        right++;
    }
    if (fs == "-1")
    {
        cout << "-1" << endl;
        return 0;
    }
    for_n(i, 0, fs.size())
    {
        if (fs[i] == '?')
        {
            cout << "A";
        }
        else
        {
            cout << fs[i];
        }
    }
    return 0;
}