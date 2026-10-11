#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int f[26] = {};
    for(char c : s) ++f[c-'A'];
    char cen = 0;
    for(char c = 'A'; c <= 'Z'; ++c)
    {
        if(f[c-'A']&1^1) continue;
        if(cen)
        {
            cout << "NO SOLUTION";
            return 0;
        }
        cen = c;
    }

    for(char c = 'A'; c <= 'Z'; ++c)
    {
        if(c == cen) continue;
        cout << string(f[c-'A']/2, c);
    }
    if(cen) cout << string(f[cen-'A'], cen);
    for(char c = 'Z'; c >= 'A'; --c)
    {
        if(c == cen) continue;
        cout << string(f[c-'A']/2, c);
    }
}
