#include <bits/stdc++.h>
using namespace std;

void sol()
{
    long long y, x;
    cin >> y >> x;
    long long cur = max(y, x), res = (cur-1)*(cur-1);
    if(cur&1) res += x+cur-y;
    else res += y+cur-x;
    cout << res << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) sol();
}
