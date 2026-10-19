#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
pair<int, int> p[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;
    for(int i = 1; i <= n; ++i)
    {
        int a;
        cin >> a;
        p[i] = {a, i};
    }

    sort(p+1, p+n+1);
    for(int i = 1, j = n; i < j;)
    {
        if(p[i].first+p[j].first == x)
        {
            cout << p[i].second << " " << p[j].second;
            return 0;
        }
        if(p[i].first+p[j].first > x) --j;
        else ++i;
    }
    cout << "IMPOSSIBLE";
}
