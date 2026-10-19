#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
pair<int, int> p[N*2];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        int a, b;
        cin >> a >> b;
        p[i*2-1] = {a, +1};
        p[i*2] = {b, -1};
    }

    sort(p+1, p+n*2+1);
    int res = 0, cur = 0;
    for(int i = 1; i <= n*2; ++i)
    {
        cur += p[i].second;
        res = max(res, cur);
    }
    cout << res;
}
