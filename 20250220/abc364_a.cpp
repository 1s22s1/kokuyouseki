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

    int N;

    cin >> N;

    vector<string> S(N);

    rep(i, N)
    {
        cin >> S.at(i);
    }

    rep(i, N - 2)
    {
        if (S.at(i) == "sweet" && S.at(i + 1) == "sweet")
        {
            cout << "No" << endl;

            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
