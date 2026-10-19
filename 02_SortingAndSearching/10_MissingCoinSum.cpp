#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
int x[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> x[i];

    sort(x+1, x+n+1);
    long long res = 1;
    for(int i = 1; i <= n; ++i)
    {
        if(x[i] > res) break;
        res += x[i];
    }
    cout << res;
}
