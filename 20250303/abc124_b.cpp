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

    vector<int> H(N);

    for (auto i : ranges::views::iota(0, N))
    {
        cin >> H.at(i);
    }

    int answer = 1;
    int max_height = H.at(0);

    for (auto i : ranges::views::iota(1, N))
    {
        if (max_height <= H.at(i))
        {
            answer++;
            max_height = H.at(i);
        }
    }

    cout << answer << endl;

    return 0;
}
