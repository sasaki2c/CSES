#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; ++i)
    {
        string g;
        cin >> g;
        for(int j = 0; j < m; ++j)
        {
            if((i+j)&1)
            {
                if(g[j] == 'B') g[j] = 'A';
                else g[j] = 'B';
            }
            else
            {
                if(g[j] == 'D') g[j] = 'C';
                else g[j] = 'D';
            }
        }
        cout << g << "\n";
    }
}
