#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    long long res = -2e18, cur = -2e18;
    while(n--)
    {
        int x;
        cin >> x;
        cur = max(cur, 0ll)+x;
        res = max(res, cur);
    }
    cout << res;
}
