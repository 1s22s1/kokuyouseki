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

    ll N, K;

    cin >> N >> K;

    rep(i, K)
    {
        if (N % 200 == 0)
        {
            N /= 200;
        }
        else
        {
            N = N * 1000 + 200;
        }
    }

    cout << N << endl;

    return 0;
}
