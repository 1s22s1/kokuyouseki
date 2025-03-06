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

    int N, M;

    cin >> N >> M;

    vector<int> A(N);
    for (auto i : ranges::views::iota(0, N))
    {
        cin >> A.at(i);
    }

    vector<int> B(M);
    for (auto i : ranges::views::iota(0, M))
    {
        cin >> B.at(i);
    }

    int answer = 0;
    for (auto a : A)
    {
        auto result = find(B.begin(), B.end(), a);

        if (result != B.end())
        {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}
