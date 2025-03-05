#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';

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

    for (auto i : ranges::views::iota(0, N))
    {
        cin >> A.at(i);
    }

    for (auto i : ranges::views::iota(0, N))
    {
        int cur = A.at(i);
        int rank = 1;

        for (auto j : ranges::views::iota(0, N))
        {
            if (cur > A.at(j))
            {
                rank++;
            }
        }

        cout << rank << endl;
    }

    return 0;
}
