#include <bits/stdc++.h>

using namespace std;

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

    int N, P, Q;

    cin >> N >> P >> Q;

    vector<int> A(N);

    for (auto i : ranges::views::iota(0, N))
    {
        cin >> A.at(i);
    }

    long long answer = 0;

    for (auto a1 : ranges::views::iota(0, N))
    {
        for (auto a2 : ranges::views::iota(a1 + 1, N))
        {
            for (auto a3 : ranges::views::iota(a2 + 1, N))
            {
                for (auto a4 : ranges::views::iota(a3 + 1, N))
                {
                    for (auto a5 : ranges::views::iota(a4 + 1, N))
                    {
                        if (1LL * A.at(a1) % P * A.at(a2) % P * A.at(a3) % P * A.at(a4) % P * A.at(a5) % P == Q)
                        {
                            answer++;
                        }
                    }
                }
            }
        }
    }

    cout << answer << endl;

    return 0;
}
