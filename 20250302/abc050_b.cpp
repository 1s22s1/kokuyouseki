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

    vector<int> T(N);

    for (auto i : ranges::views::iota(0, N))
    {
        cin >> T.at(i);
    }

    int M;

    cin >> M;

    for (auto i : ranges::views::iota(0, M))
    {
        int P, X;

        cin >> P >> X;

        int sum = 0;

        for (auto i : ranges::views::iota(0, N))
        {
            if (P == i + 1)
            {
                sum += X;
            }
            else
            {
                sum += T.at(i);
            }
        }

        cout << sum << endl;
    }

    return 0;
}
