#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
int k[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, t;
    cin >> n >> t;
    for(int i = 1; i <= n; ++i)
        cin >> k[i];

    auto check = [&](long long m){
        long long s = 0;
        for(int i = 1; i <= n; ++i)
        {
            s += m/k[i];
            if(s >= t) return true;
        }
        return false;
    };

    long long res = 1e18;
    for(long long l = 1, r = 1e18; l <= r;)
    {
        long long m = (l+r)/2;
        if(check(m))
        {
            res = m;
            r = m-1;
        }
        else l = m+1;
    }
    cout << res;
}
