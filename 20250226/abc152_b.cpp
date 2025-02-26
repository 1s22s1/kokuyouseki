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

int main()
{
    init();

    int a, b;

    cin >> a >> b;

    string ab = to_string(a);
    string ba = to_string(b);

    rep(i, b - 1)
    {
        ab += to_string(a);
    }

    rep(i, a - 1)
    {
        ba += to_string(b);
    }

    if (ab < ba)
    {
        cout << ab << endl;
    }
    else
    {
        cout << ba << endl;
    }

    return 0;
}
