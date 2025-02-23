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

int main()
{
    init();

    int H, W;

    cin >> H >> W;

    vector<vector<int>> A(H, vector<int>(W));

    rep(i, H)
    {
        rep(j, W)
        {
            cin >> A.at(i).at(j);
        }
    }

    int min_value = 1000;
    int sum_value = 0;

    rep(i, H)
    {
        rep(j, W)
        {
            sum_value += A.at(i).at(j);

            if (min_value > A.at(i).at(j))
            {
                min_value = A.at(i).at(j);
            }
        }
    }

    cout << sum_value - min_value * H * W << endl;

    // vector<int> A(H * W);

    // rep(i, H)
    // {
    //     rep(j, W)
    //     {
    //         cin >> A.at(i + j);
    //     }
    // }

    // rep(i, H * W)
    // {
    //     cout << A.at(i) << endl;
    // }

    // int sum_value = accumulate(A.begin(), A.end(), 0);
    // int min_value = *min_element(A.begin(), A.end());

    // cout << sum_value << endl;
    // cout << min_value << endl;
    // cout << sum_value - min_value * H * W << endl;
}
