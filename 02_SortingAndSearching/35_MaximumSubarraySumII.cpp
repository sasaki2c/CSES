#include <bits/stdc++.h>
using namespace std;

const int N = 2e5+7;
long long s[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, a, b;
    cin >> n >> a >> b;
    deque<long long> dq;
    long long res = -2e18;
    for(int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        s[i] = s[i-1]+x;
        if(i >= a)
        {
            while(!dq.empty() && dq.back() > s[i-a])
                dq.pop_back();
            dq.push_back(s[i-a]);
        }
        if(i > b)
        {
            if(dq.front() == s[i-b-1])
                dq.pop_front();
        }
        if(!dq.empty()) res = max(res, s[i]-dq.front());
    }
    cout << res;
}
