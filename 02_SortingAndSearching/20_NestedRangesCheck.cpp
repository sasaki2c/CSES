#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
using range = tuple<int, int, int>;
range p1[N], p2[N];
bitset<N> res1, res2;

void sol(int n, range p[], bitset<N>& res)
{
    sort(p+1, p+n+1);
    int cur = 0;
    for(int i = 1; i <= n; ++i)
    {
        const auto& [y, x, j] = p[i];
        res[j] = (cur >= -x);
        cur = max(cur, -x);
    }
    for(int i = 1; i <= n; ++i)
        cout << res[i] << " ";
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        int x, y;
        cin >> x >> y;
        p1[i] = {y, -x, i};
        p2[i] = {x, -y, i};
    }

    sol(n, p1, res1);
    sol(n, p2, res2);
}
