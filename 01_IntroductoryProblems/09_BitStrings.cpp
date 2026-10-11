#include <bits/stdc++.h>
using namespace std;

const int M = 1e9+7;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int res = 1;
    while(n--) res = res*2%M;
    cout << res;
}
