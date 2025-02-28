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

    rep(i, N - 1)
    {
        if (A.at(i) < A.at(i + 1))
        {
            for (int j = A.at(i); j < A.at(i + 1); j++)
            {
                cout << j << ' ';
            }
        }
        else
        {
            for (int j = A.at(i); j > A.at(i + 1); j--)
            {
                cout << j << ' ';
            }
        }
    }

    cout << A.at(N - 1);

    cout << endl;

    return 0;
}
