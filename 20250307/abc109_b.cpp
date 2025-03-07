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

    cin >> N;

    vector<string> W(N);

    for (auto i : ranges::views::iota(0, N))
    {
        cin >> W.at(i);
    }

    for (auto i : ranges::views::iota(0, N - 1))
    {
        if (W.at(i).at(W.at(i).size() - 1) != W.at(i + 1).at(0))
        {
            cout << "No" << endl;

            return 0;
        }
    }

    sort(W.begin(), W.end());

    for (auto i : ranges::views::iota(0, N - 1))
    {
        if (W.at(i) == W.at(i + 1))
        {
            cout << "No" << endl;

            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
