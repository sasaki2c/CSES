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
    if(*max_element(f, f+26) > ((int)s.size()+1)/2)
    {
        cout << -1;
        return 0;
    }

    char pre = 0;
    for(int i = 0; i < (int)s.size(); ++i)
    {
        for(char c = 'A'; c <= 'Z'; ++c)
        {
            if(!f[c-'A'] || c == pre) continue;
            --f[c-'A'];
            if(*max_element(f, f+26) > ((int)s.size()-i)/2)
            {
                ++f[c-'A'];
                continue;
            }
            cout << c;
            pre = c;
            break;
        }
    }
}
