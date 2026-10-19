#include <bits/stdc++.h>
using namespace std;

const int M = 1e9+7;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    map<int, int> mp;
    while(n--)
    {
        int x;
        cin >> x;
        ++mp[x];
    }
    int res = 1;
    for(const auto& [x, f] : mp)
        res = (long long)res*(f+1)%M;
    cout << (--res);
}
