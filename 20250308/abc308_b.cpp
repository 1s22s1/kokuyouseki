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

    int N, M;

    cin >> N >> M;

    vector<string> C(N);

    for (auto i : ranges::views::iota(0, N))
    {
        cin >> C.at(i);
    }

    vector<string> D(M);

    for (auto i : ranges::views::iota(0, M))
    {
        cin >> D.at(i);
    }

    vector<int> P(M + 1);

    for (auto i : ranges::views::iota(0, M + 1))
    {
        cin >> P.at(i);
    }

    int answer = 0;

    for (auto i : ranges::views::iota(0, N))
    {
        bool flag = true;
        for (auto j : ranges::views::iota(0, M))
        {
            if (C.at(i) == D.at(j))
            {
                answer += P.at(j + 1);
                flag = false;
            }
        }

        if (flag)
        {
            answer += P.at(0);
        }
    }

    cout << answer << endl;

    return 0;
}
