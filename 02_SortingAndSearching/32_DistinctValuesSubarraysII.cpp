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

    map<int, int> mp;
    long long res = 0;
    int cur = 0;
    for(int i = 1, j = 1; i <= n; ++i)
    {
        cur += (++mp[x[i]] == 1);
        while(cur > k) cur -= (mp[x[j++]]-- == 1);
        res += i-j+1;
    }
    cout << res;
}
