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

    int N, K;

    cin >> N >> K;

    vector<int> A(N);

    rep(i, N)
    {
        cin >> A.at(i);
    }

    for (int i = N - K; i < N; i++)
    {
        cout << A.at(i) << ' ';
    }

    rep(i, N - K)
    {
        cout << A.at(i) << ' ';
    }

    cout << endl;

    return 0;
}
