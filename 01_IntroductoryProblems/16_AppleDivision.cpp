#include <bits/stdc++.h>
using namespace std;

const int N = 20;
int p[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> p[i];

    long long res = accumulate(p, p+n, 0ll), s = res;
    for(int b = 0; b < (1<<n); ++b)
    {
        long long w = 0;
        for(int i = 0; i < n; ++i)
            if(b>>i&1) w += p[i];
        res = min(res, abs(s-w*2));
    }
    cout << res;
}
