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

    int N;

    cin >> N;

    vector<int> B(N);

    rep(i, N)
    {
        int sum = 0;

        rep(i, 7)
        {
            int a;
            cin >> a;

            sum += a;
        }

        B.at(i) = sum;
    }

    rep(i, N)
    {
        cout << B.at(i) << ' ';
    }

    cout << endl;

    return 0;
}
