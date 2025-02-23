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

    int H, W;

    cin >> H >> W;

    vector<string> C(H);

    rep(i, H)
    {
        cin >> C.at(i);
    }

    rep(i, 2 * H)
    {
        rep(j, W)
        {
            cout << C.at((i + 2) / 2 - 1).at(j);
        }

        cout << endl;
    }

    return 0;
}
