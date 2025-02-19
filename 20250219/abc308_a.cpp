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

    vector<int> S(8);

    rep(i, 8)
    {
        cin >> S.at(i);
    }

    rep(i, 6)
    {
        if (S.at(i) > S.at(i + 1))
        {
            cout << "No" << endl;

            return 0;
        }
    }

    rep(i, 7)
    {
        if (S.at(i) < 100 || S.at(i) > 675)
        {
            cout << "No" << endl;

            return 0;
        }

        if (S.at(i) % 25 != 0)
        {
            cout << "No" << endl;

            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
