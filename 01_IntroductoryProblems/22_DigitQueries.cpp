#include <bits/stdc++.h>
using namespace std;

const int N = 18;
long long p[N], s[N];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    p[0] = 1;
    for(int i = 1; i < N; ++i)
    {
        p[i] = p[i-1]*10;
        s[i] = s[i-1]+p[i-1]*9*i;
    }

    int q;
    cin >> q;
    while(q--)
    {
        long long k;
        cin >> k;
        int i = 1;
        while(s[i] < k) ++i;
        long long r = k-1-s[i-1];
        cout << to_string(p[i-1]+r/i)[r%i]-'0' << "\n";
    }
}
