#include <bits/stdc++.h>
using namespace std;

const int N = 1e3+7;
int a[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];

    set<tuple<int, int, int>> s;
    for(int i = 1; i < n; ++i)
        for(int j = i+1; j <= n; ++j)
            s.emplace(a[i]+a[j], i, j);

    for(int i = 1; i < n-1; ++i)
    {
        for(int j = i+1; j <= n; ++j)
            s.erase({a[i]+a[j], i, j});
        for(int j = 1; j < i; ++j)
        {
            auto it = s.lower_bound({x-a[i]-a[j], 0, 0});
            if(it != s.end() && get<0>(*it) == x-a[i]-a[j])
            {
                cout << i << " " << j << " " << get<1>(*it) << " " << get<2>(*it);
                return 0;
            }
        }
    }
    cout << "IMPOSSIBLE";
}
