#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    long long res = (long long)n*(n+1)/2;
    while(--n)
    {
        int x;
        cin >> x;
        res -= x;
    }
    cout << res;
}
