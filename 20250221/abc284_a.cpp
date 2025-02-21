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

    vector<string> S(N);

    rep(i, N)
    {
        cin >> S.at(i);
    }

    for (string t : views::reverse(S))
    {
        cout << t << endl;
    }

    return 0;
}
