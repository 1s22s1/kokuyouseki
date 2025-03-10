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

    int K, S;

    cin >> K >> S;

    int answer = 0;

    for (auto X : ranges::views::iota(0, K + 1))
    {
        for (auto Y : ranges::views::iota(0, K + 1))
        {
            int Z = S - X - Y;

            if (0 <= Z && Z <= K)
            {
                cout << X << ' ' << Y << ' ' << Z << endl;
                answer++;
            }
        }
    }

    cout << answer << endl;

    return 0;
}
