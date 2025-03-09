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
    string S;

    cin >> N >> S;

    int answer = -1;

    for (auto i : ranges::views::iota(1, N))
    {
        auto left = S.substr(0, i);
        auto right = S.substr(i);

        set<char> left_set;
        for (char c : left)
        {
            left_set.insert(c);
        }

        set<char> right_set;
        for (char c : right)
        {
            right_set.insert(c);
        }

        set<char> result;
        set_intersection(right_set.begin(), right_set.end(), left_set.begin(), left_set.end(), inserter(result, result.begin()));

        answer = max(answer, (int)result.size());
    }

    cout << answer << endl;

    return 0;
}
