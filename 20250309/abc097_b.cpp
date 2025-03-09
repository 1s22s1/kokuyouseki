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

    int X;

    cin >> X;

    int answer = -1;

    for (auto b : ranges::views::iota(1, 33))
    {
        for (auto p : ranges::views::iota(2, 12))
        {
            if (pow(b, p) <= X)
            {
                answer = max(answer, (int)pow(b, p));
            }
        }
    }

    cout << answer << endl;

    return 0;
}
