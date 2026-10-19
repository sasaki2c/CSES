#include <bits/stdc++.h>
using namespace std;

const int N = 5e3+7;
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
    for(int i = 1; i < n-1; ++i)
    {
        for(int j = i+1, k = n; j < k;)
        {
            if(p[j].first+p[k].first == x-p[i].first)
            {
                cout << p[i].second << " " << p[j].second << " " << p[k].second;
                return 0;
            }
            if(p[j].first+p[k].first > x-p[i].first) --k;
            else ++j;
        }
    }
    cout << "IMPOSSIBLE";
}
