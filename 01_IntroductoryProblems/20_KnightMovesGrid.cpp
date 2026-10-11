#include <bits/stdc++.h>
using namespace std;

const int N = 1000,
di[8] = {-1, -2, -2, -1, +1, +2, +2, +1},
dj[8] = {+2, +1, -1, -2, -2, -1, +1, +2};
int g[N][N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    memset(g, -1, sizeof(g));
    g[0][0] = 0;
    queue<pair<int, int>> q;
    q.emplace(0, 0);
    while(!q.empty())
    {
        auto [i, j] = q.front();
        q.pop();
        for(int k = 0; k < 8; ++k)
        {
            int ni = i+di[k], nj = j+dj[k];
            if(ni < 0 || ni >= n || nj < 0 || nj >= n || g[ni][nj] >= 0) continue;
            g[ni][nj] = g[i][j]+1;
            q.emplace(ni, nj);
        }
    }

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
            cout << g[i][j] << " ";
        cout << "\n";
    }
}
