#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
int p[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> p[i];

    sort(p+1, p+n+1);
    long long res = 0;
    for(int i = 1; i <= n; ++i)
        res += abs(p[(n+1)/2]-p[i]);
    cout << res;
}
