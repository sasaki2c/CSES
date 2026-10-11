#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int res = 1, cur = 1;
    for(int i = 1; i < (int)s.size(); ++i)
    {
        if(s[i] == s[i-1]) ++cur;
        else cur = 1;
        res = max(res, cur);
    }
    cout << res;
}
