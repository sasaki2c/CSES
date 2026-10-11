#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int k = 1; k <= n; ++k)
        cout << ((long long)k*k*k*k - k*k*9 + k*24 - 16)/2 << "\n";
}
