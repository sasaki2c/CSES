#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    if(n%4 == 1 || n%4 == 2)
    {
        cout << "NO";
        return 0;
    }

    vector<int> res1, res2;
    int cur = n+(n%4 == 3);
    for(int i = 1; i <= cur/2; ++i)
    {
        if(i&1)
        {
            res1.push_back(i);
            res1.push_back(cur+1-i);
        }
        else
        {
            res2.push_back(i);
            res2.push_back(cur+1-i);
        }
    }
    if(cur > n)
    {
        res1.erase(find(res1.begin(), res1.end(), cur));
        res2.erase(find(res2.begin(), res2.end(), cur/2));
        res1.push_back(cur/2);
    }

    cout << "YES\n";
    cout << res1.size() << "\n";
    for(int i : res1) cout << i << " ";
    cout << "\n";
    cout << res2.size() << "\n";
    for(int i : res2) cout << i << " ";
}
