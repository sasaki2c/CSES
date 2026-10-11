#include <bits/stdc++.h>
using namespace std;

const int N = 16;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    for(int i = 0; i < (1<<n); ++i)
        cout << bitset<N>(i^(i/2)).to_string().substr(N-n) << "\n";
}
