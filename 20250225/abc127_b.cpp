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

    int r, d, x_2000;

    cin >> r >> d >> x_2000;

    rep(i, 10)
    {
        x_2000 = r * x_2000 - d;

        cout << x_2000 << endl;
    }

    return 0;
}
