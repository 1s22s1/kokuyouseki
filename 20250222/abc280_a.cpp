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

    vector<string> S(H);

    rep(i, H)
    {
        cin >> S.at(i);
    }

    int answer = 0;

    rep(i, H)
    {
        rep(j, W)
        {
            if (S.at(i).at(j) == '#')
            {
                answer++;
            }
        }
    }

    cout << answer << endl;

    return 0;
}
