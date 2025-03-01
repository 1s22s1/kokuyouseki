#include <bits/stdc++.h>

using namespace std;
using ll = long long;

#define endl '\n';
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

struct Point
{
    int x, y;
};

int main()
{
    init();

    int N;

    cin >> N;

    vector<Point> points(N);

    rep(i, N)
    {
        int x, y;

        cin >> x >> y;

        points.at(i) = Point({x, y});
    }

    for (auto i : ranges::views::iota(0, N))
    {
        int max_point = -1;
        double max_distance = -1;

        for (auto j : ranges::views::iota(0, N))
        {
            double cur_distance = (points.at(i).x - points.at(j).x) * (points.at(i).x - points.at(j).x) + (points.at(i).y - points.at(j).y) * (points.at(i).y - points.at(j).y);

            if (cur_distance > max_distance)
            {
                max_distance = cur_distance;
                max_point = j;
            }
        }

        cout << max_point + 1 << endl;
    }

    return 0;
}
