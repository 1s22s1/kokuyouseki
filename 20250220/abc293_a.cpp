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

    string S;

    cin >> S;

    rep(i, S.size() / 2)
    {
        cout << S.at(i * 2 + 1) << S.at(i * 2);
    }

    cout << endl;

    return 0;
}
