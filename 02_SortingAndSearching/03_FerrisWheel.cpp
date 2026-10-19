#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
int p[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, x;
    cin >> n >> x;
    for(int i = 1; i <= n; ++i)
        cin >> p[i];

    sort(p+1, p+n+1);
    int res = 0;
    for(int i = 1, j = n; i <= j; --j)
    {
        ++res;
        if(p[i]+p[j] <= x) ++i;
    }
    cout << res;
}
