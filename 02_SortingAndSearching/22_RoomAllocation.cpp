#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
tuple<int, int, int> p[N*2];
int res[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        int a, b;
        cin >> a >> b;
        p[i*2-1] = {a, 1, i};
        p[i*2] = {b, 2, i};
    }

    sort(p+1, p+n*2+1);
    vector<int> v;
    int k = 0;
    for(int i = 1; i <= n*2; ++i)
    {
        const auto& [a, t, j] = p[i];
        if(t == 1)
        {
            if(v.empty()) v.push_back(++k);
            res[j] = v.back();
            v.pop_back();
        }
        else if(t == 2) v.push_back(res[j]);
    }
    cout << k << "\n";
    for(int i = 1; i <= n; ++i)
        cout << res[i] << " ";
}
