#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    long long res = 0;
    int cur = 0;
    while(n--)
    {
        int x;
        cin >> x;
        cur = max(cur, x);
        res += cur-x;
    }
    cout << res;
}
