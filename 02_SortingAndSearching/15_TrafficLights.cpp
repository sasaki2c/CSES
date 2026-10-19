#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, n;
    cin >> x >> n;
    multiset<int> ms;
    set<int> s;
    ms.insert(x);
    s.insert(0);
    s.insert(x);
    while(n--)
    {
        int p;
        cin >> p;
        auto it = s.upper_bound(p);
        ms.erase(ms.find(*it-*prev(it)));
        ms.insert(*it-p);
        ms.insert(p-*prev(it));
        cout << *ms.rbegin() << "\n";
        s.insert(p);
    }
}
