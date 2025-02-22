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

    vector<string> A(N);
    vector<string> B(N);

    rep(i, N)
    {
        cin >> A.at(i);
    }

    rep(i, N)
    {
        cin >> B.at(i);
    }

    rep(i, N)
    {
        rep(j, N)
        {
            if (A.at(i).at(j) != B.at(i).at(j))
            {
                cout << i + 1 << ' ' << j + 1 << endl;

                return 0;
            }
        }
    }

    return 0;
}
