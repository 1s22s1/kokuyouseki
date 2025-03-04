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

    vector<int> A;

    for (auto i : ranges::views::iota(0, N))
    {
        int n;
        cin >> n;

        A.push_back(n);
    }

    for (auto i : ranges::views::iota(0, N - 1))
    {
        vector<int> B;

        for (auto j : ranges::views::iota(0, (int)(A.size() - 1)))
        {
            B.push_back(abs(A.at(j) - A.at(j + 1)));
        }

        A = B;
    }

    cout << A.at(0) << endl;

    return 0;
}
