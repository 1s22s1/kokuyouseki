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

    int R, C;

    cin >> R >> C;

    vector<vector<int>> A(2, vector<int>(2));

    rep(i, 2)
    {
        rep(j, 2)
        {
            cin >> A.at(i).at(j);
        }
    }

    cout << A.at(R - 1).at(C - 1) << endl;

    return 0;
}
