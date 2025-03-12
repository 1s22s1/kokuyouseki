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

    int N;
    long long A, B, C;

    cin >> N >> A >> B >> C;

    long long answer = 10000;

    for (auto i : ranges::views::iota(0, 10000))
    {
        for (auto j : ranges::views::iota(0, 10000))
        {
            long long remain = N - A * i - B * j;

            if (remain >= 0 && remain % C == 0)
            {
                answer = min(answer, i + j + remain / C);
            }
        }
    }

    cout << answer << endl;

    return 0;
}
