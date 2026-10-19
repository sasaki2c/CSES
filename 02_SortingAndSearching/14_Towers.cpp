#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v;
    while(n--)
    {
        int k;
        cin >> k;
        auto it = upper_bound(v.begin(), v.end(), k);
        if(it == v.end()) v.push_back(k);
        else *it = k;
    }
    cout << v.size();
}
