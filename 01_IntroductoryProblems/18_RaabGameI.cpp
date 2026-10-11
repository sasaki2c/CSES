#include <bits/stdc++.h>
using namespace std;

void sol()
{
    int n, a, b;
    cin >> n >> a >> b;
    if(a+b > n || (!a && b) || (a && !b))
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    for(int i = 1; i <= n; ++i)
        cout << i << " ";
    cout << "\n";
    for(int i = a+1; i <= a+b; ++i)
        cout << i << " ";
    for(int i = 1; i <= a; ++i)
        cout << i << " ";
    for(int i = a+b+1; i <= n; ++i)
        cout << i << " ";
    cout << "\n";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--) sol();
}
