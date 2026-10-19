#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int, int>> st;
    for(int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        while(!st.empty() && st.back().first >= x)
            st.pop_back();
        if(st.empty()) cout << "0 ";
        else cout << st.back().second << " ";
        st.emplace_back(x, i);
    }
}
