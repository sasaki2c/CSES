#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    map<int, int> mp;
    long long res = 0;
    int cur = 0;
    for(int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        cur = max(cur, mp[x]);
        res += i-cur;
        mp[x] = i;
    }
    cout << res;
}
