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

    int N, D;

    cin >> N >> D;

    vector<int> T(N);

    rep(i, N)
    {
        cin >> T.at(i);
    }

    rep(i, N - 1)
    {
        if (T.at(i + 1) - T.at(i) <= D)
        {
            cout << T.at(i + 1) << endl;

            return 0;
        }
    }

    cout << -1 << endl;

    return 0;
}
