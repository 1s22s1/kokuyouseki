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

    vector<int> A(N);
    vector<int> B(N);
    vector<int> C(N - 1);

    rep(i, N)
    {
        cin >> A.at(i);
    }

    rep(i, N)
    {
        cin >> B.at(i);
    }

    rep(i, N - 1)
    {
        cin >> C.at(i);
    }

    int answer = 0;

    cout << answer << endl;

    return 0;
}
