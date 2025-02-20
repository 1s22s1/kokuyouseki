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

    int N, P, Q, R, S;

    cin >> N >> P >> Q >> R >> S;

    vector<int> A(N);

    rep(i, N)
    {
        cin >> A.at(i);
    }

    rep(i, N)
    {
        if (P - 1 <= i && i <= Q - 1)
        {
            cout << A.at(R + i - 1) << ' ';
        }
        else if (R - 1 <= i && i <= S - 1)
        {
            cout << A.at(i - Q - 1) << ' ';
        }
        else
        {
            cout << A.at(i) << ' ';
        }
    }

    cout << endl;

    return 0;
}
