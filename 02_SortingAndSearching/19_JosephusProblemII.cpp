#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

template <typename T>
using indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    indexed_set<int> s;
    for(int i = 1; i <= n; ++i)
        s.insert(i);
    int cur = 0;
    for(int i = 1; i <= n; ++i)
    {
        cur = (cur+k)%(n-i+1);
        auto it = s.find_by_order(cur);
        cout << *it << " ";
        s.erase(it);
    }
}
