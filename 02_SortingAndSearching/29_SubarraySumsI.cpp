#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
int a[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];

    int res = 0, cur = a[1];
    for(int i = 1, j = 1; i <= n; ++i)
    {
        while(j < n && cur < x) cur += a[++j];
        res += (cur == x);
        cur -= a[i];
    }
    cout << res;
}
