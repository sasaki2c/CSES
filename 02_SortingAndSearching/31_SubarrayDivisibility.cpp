#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
int f[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    f[0] = 1;
    long long res = 0;
    int cur = 0;
    for(int i = 1; i <= n; ++i)
    {
        int a;
        cin >> a;
        cur = ((cur+a)%n+n)%n;
        res += f[cur]++;
    }
    cout << res;
}
