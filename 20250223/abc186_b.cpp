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

    map<int, int> frequency;

    rep(i, H * W)
    {
        int num;

        cin >> num;

        frequency[num]++;
    }

    int max_value = -1;

    for (auto f : frequency)
    {
        if (f.second > max_value)
        {
            max_value = f.second;
        }
    }

    cout << H * W - max_value << endl;

    return 0;
}
