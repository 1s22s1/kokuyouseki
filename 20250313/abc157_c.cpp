#include <bits/stdc++.h>

using namespace std;

#define endl '\n';

int init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

int get_digit(int n, int m)
{
    return (int)(to_string(n).at(m - 1) - '0');
}

int main()
{
    init();

    int N, M;

    cin >> N >> M;

    vector<vector<int>> scs(M, vector<int>(2));

    for (auto i : ranges::views::iota(0, M))
    {
        cin >> scs.at(i).at(0);
        cin >> scs.at(i).at(1);
    }

    if (N == 1)
    {
        for (auto i : ranges::views::iota(1, 10))
        {
            bool meet = true;

            for (auto sc : scs)
            {
                int digit = get_digit(i, sc.at(0));

                if (digit != sc.at(1))
                {

                    meet = false;
                    break;
                }
            }

            if (meet)
            {
                cout << i << endl;

                return 0;
            }
        }
    }
    else if (N == 2)
    {
        for (auto i : ranges::views::iota(10, 100))
        {
            bool meet = true;

            for (auto sc : scs)
            {
                int digit = get_digit(i, sc.at(0));

                if (digit != sc.at(1))
                {

                    meet = false;
                    break;
                }
            }

            if (meet)
            {
                cout << i << endl;

                return 0;
            }
        }
    }
    else if (N == 3)
    {
        for (auto i : ranges::views::iota(100, 1000))
        {
            bool meet = true;

            for (auto sc : scs)
            {
                int digit = get_digit(i, sc.at(0));

                if (digit != sc.at(1))
                {

                    meet = false;
                    break;
                }
            }

            if (meet)
            {
                cout << i << endl;

                return 0;
            }
        }
    }

    cout << -1 << endl;

    return 0;
}
