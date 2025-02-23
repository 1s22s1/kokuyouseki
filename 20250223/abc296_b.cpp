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

    vector<string> S(8);

    rep(i, 8)
    {
        cin >> S.at(i);
    }

    rep(i, 8)
    {
        rep(j, 8)
        {
            if (S.at(i).at(j) == '*')
            {
                cout << (char)('a' + j) << 8 - i << endl;

                return 0;
            }
        }
    }

    return 0;
}
