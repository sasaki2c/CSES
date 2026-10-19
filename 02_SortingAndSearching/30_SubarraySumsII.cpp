#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;
    map<long long, int> mp;
    mp[0] = 1;
    long long res = 0, cur = 0;
    while(n--)
    {
        int a;
        cin >> a;
        cur += a;
        res += mp[cur-x];
        ++mp[cur];
    }
    cout << res;
}
