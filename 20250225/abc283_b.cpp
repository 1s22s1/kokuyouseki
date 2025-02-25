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

    vector<int> A(N);

    rep(i, N)
    {
        cin >> A.at(i);
    }

    int Q;

    cin >> Q;

    rep(i, Q)
    {
        int order;
        int k;

        cin >> order >> k;

        if (order == 1)
        {
            int x;
            cin >> x;
            A.at(k - 1) = x;
        }
        else
        {
            cout << A.at(k - 1) << endl;
        }
    }

    return 0;
}
