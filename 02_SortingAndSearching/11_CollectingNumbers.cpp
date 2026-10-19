#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
int pos[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        pos[x] = i;
    }

    int res = 1;
    for(int i = 2; i <= n; ++i)
        res += (pos[i] < pos[i-1]);
    cout << res;
}
