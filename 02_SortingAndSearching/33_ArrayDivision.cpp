#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
int x[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; ++i)
        cin >> x[i];

    auto check = [&](long long m){
        int c = 1;
        long long s = 0;
        for(int i = 1; i <= n; ++i)
        {
            s += x[i];
            if(s > m)
            {
                if(++c > k) return false;
                s = x[i];
            }
        }
        return true;
    };

    long long res = accumulate(x+1, x+n+1, 0ll);
    for(long long l = *max_element(x+1, x+n+1), r = res; l <= r;)
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
