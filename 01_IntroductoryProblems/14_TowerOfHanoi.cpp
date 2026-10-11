#include <bits/stdc++.h>
using namespace std;

void move(int n, int a, int b, int c)
{
    if(n == 1)
    {
        cout << a << " " << b << "\n";
        return;
    }
    move(n-1, a, c, b);
    move(1, a, b, c);
    move(n-1, c, b, a);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    cout << (1<<n)-1 << "\n";
    move(n, 1, 3, 2);
}
