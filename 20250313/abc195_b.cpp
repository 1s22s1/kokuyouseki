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

    int A, B, W;

    cin >> A >> B >> W;

    int answer_min = 1000001;
    int answer_max = -1;

    for (auto i : ranges::views::iota(1, 1000001))
    {
        if (A * i <= 1000 * W && 1000 * W <= B * i)
        {
            answer_min = min(answer_min, i);
            answer_max = max(answer_max, i);
        }
    }

    if (answer_max == -1)
    {
        cout << "UNSATISFIABLE" << endl;
    }
    else
    {
        cout << answer_min << ' ' << answer_max << endl;
    }

    return 0;
}
