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

    vector<string> C(3);

    rep(i, 3)
    {
        cin >> C.at(i);
    }

    rep(i, 3)
    {
        cout << C.at(i).at(i);
    }

    cout << endl;

    return 0;
}
