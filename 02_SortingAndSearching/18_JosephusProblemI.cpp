#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> v(n);
    iota(v.begin(), v.end(), 1);
    for(int i = 0; i < (int)v.size(); ++i)
    {
        if(i&1) cout << v[i] << " ";
        else v.push_back(v[i]);
    }
}
