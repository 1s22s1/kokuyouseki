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

    int N, L, R;

    cin >> N >> L >> R;

    for (int i = 1; i < L; i++)
    {
        cout << i << ' ';
    }

    for (int i = R; L <= i; i--)
    {
        cout << i << ' ';
    }

    for (int i = R + 1; i <= N; i++)
    {
        cout << i << ' ';
    }

    cout << endl;

    return 0;
}
