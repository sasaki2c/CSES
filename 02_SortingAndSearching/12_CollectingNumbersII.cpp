#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
int x[N], pos[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
    {
        cin >> x[i];
        pos[x[i]] = i;
    }

    int res = 1;
    for(int i = 2; i <= n; ++i)
        res += (pos[i] < pos[i-1]);
    while(m--)
    {
        int a, b;
        cin >> a >> b;
        if(x[a] > 1) res -= (pos[x[a]] < pos[x[a]-1]);
        if(x[a] < n) res -= (pos[x[a]+1] < pos[x[a]]);
        if(x[b] > 1 && x[b]-1 != x[a]) res -= (pos[x[b]] < pos[x[b]-1]);
        if(x[b] < n && x[b]+1 != x[a]) res -= (pos[x[b]+1] < pos[x[b]]);
        swap(x[a], x[b]);
        swap(pos[x[a]], pos[x[b]]);
        if(x[a] > 1) res += (pos[x[a]] < pos[x[a]-1]);
        if(x[a] < n) res += (pos[x[a]+1] < pos[x[a]]);
        if(x[b] > 1 && x[b]-1 != x[a]) res += (pos[x[b]] < pos[x[b]-1]);
        if(x[b] < n && x[b]+1 != x[a]) res += (pos[x[b]+1] < pos[x[b]]);
        cout << res << "\n";
    }
}
