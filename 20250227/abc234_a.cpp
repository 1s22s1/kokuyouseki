#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

ll f(ll x)
{
    return x * x + 2 * x + 3;
}

int main()
{
    init();

    ll t;

    cin >> t;

    cout << f(f(f(t) + t) + f(f(t))) << endl;

    return 0;
}
