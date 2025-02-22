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

    vector<vector<int>> A(H, vector<int>(W));

    rep(i, H)
    {
        rep(j, W)
        {
            cin >> A.at(i).at(j);
        }
    }

    rep(i, H)
    {
        rep(j, W)
        {
            if (A.at(i).at(j) == 0)
            {
                cout << '.';
            }
            else
            {
                cout << (char)('A' + (A.at(i).at(j) - 1));
            }
        }

        cout << endl;
    }

    return 0;
}
