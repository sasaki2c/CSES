#include <bits/stdc++.h>
using namespace std;

const int N = 8;
string g[N];
bitset<N> col;
bitset<N*2-1> diag1, diag2;

int dfs(int i)
{
    if(i == N) return 1;
    int res = 0;
    for(int j = 0; j < N; ++j)
    {
        if(g[i][j] == '*' || col[j] || diag1[i-j+N-1] || diag2[i+j]) continue;
        col[j] = diag1[i-j+N-1] = diag2[i+j] = true;
        res += dfs(i+1);
        col[j] = diag1[i-j+N-1] = diag2[i+j] = false;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 0; i < N; ++i)
        cin >> g[i];
    cout << dfs(0);
}
