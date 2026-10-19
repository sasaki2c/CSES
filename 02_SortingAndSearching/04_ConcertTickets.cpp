#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    multiset<int> ms;
    while(n--)
    {
        int h;
        cin >> h;
        ms.insert(h);
    }
    while(m--)
    {
        int t;
        cin >> t;
        auto it = ms.upper_bound(t);
        if(it == ms.begin()) cout << "-1\n";
        else
        {
            cout << *prev(it) << "\n";
            ms.erase(prev(it));
        }
    }
}
