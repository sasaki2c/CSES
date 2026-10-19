#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
pair<int, int> p[N];

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
        p[i] = {b, a};
    }

    sort(p+1, p+n+1);
    int res = 0, cur = 0;
    for(int i = 1; i <= n; ++i)
    {
        if(p[i].second >= cur)
        {
            ++res;
            cur = p[i].first;
        }
    }
    cout << res;
}
