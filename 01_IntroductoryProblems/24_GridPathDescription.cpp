#include <bits/stdc++.h>
using namespace std;

const int N = 7;
bitset<N> g[N];
string s;

bool check(int i, int j){
    return i < 0 || i >= N || j < 0 || j >= N || g[i][j];
}

int dfs(int i, int j, int k)
{
    if(i == N-1 && !j) return k == N*N-1;
    bool r = check(i, j+1), u = check(i-1, j), l = check(i, j-1), d = check(i+1, j);
    if((r && !u && l && !d) || (!r && u && !l && d)) return 0;
    int res = 0;
    g[i][j] = true;
    if(!r && (s[k] == '?' || s[k] == 'R')) res += dfs(i, j+1, k+1);
    if(!u && (s[k] == '?' || s[k] == 'U')) res += dfs(i-1, j, k+1);
    if(!l && (s[k] == '?' || s[k] == 'L')) res += dfs(i, j-1, k+1);
    if(!d && (s[k] == '?' || s[k] == 'D')) res += dfs(i+1, j, k+1);
    g[i][j] = false;
    return res;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> s;
    cout << dfs(0, 0, 0);
}
