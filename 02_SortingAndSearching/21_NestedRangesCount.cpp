#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
using range = tuple<int, int, int>;
range p1[N], p2[N];
int res1[N], res2[N];

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

template <typename T>
using indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void sol(int n, range p[], int res[])
{
    sort(p+1, p+n+1);
    indexed_set<pair<int, int>> s;
    for(int i = 1; i <= n; ++i)
    {
        const auto& [y, x, j] = p[i];
        res[j] = s.size()-s.order_of_key({-x, 0});
        s.insert({-x, j});
    }
    for(int i = 1; i <= n; ++i)
        cout << res[i] << " ";
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        int x, y;
        cin >> x >> y;
        p1[i] = {y, -x, i};
        p2[i] = {x, -y, i};
    }

    sol(n, p1, res1);
    sol(n, p2, res2);
}
