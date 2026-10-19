#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    long long s = 0;
    int m = 0;
    while(n--)
    {
        int t;
        cin >> t;
        s += t;
        m = max(m, t);
    }
    cout << max(s, (long long)m*2);
}
