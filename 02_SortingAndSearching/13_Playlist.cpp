#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    map<int, int> mp;
    int res = 0, cur = 0;
    for(int i = 1; i <= n; ++i)
    {
        int k;
        cin >> k;
        cur = max(cur, mp[k]);
        res = max(res, i-cur);
        mp[k] = i;
    }
    cout << res;
}
