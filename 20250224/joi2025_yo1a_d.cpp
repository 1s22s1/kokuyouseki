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

    int N, M;

    cin >> N >> M;

    vector<int> A(N);
    vector<int> B(M);

    rep(i, N)
    {
        cin >> A.at(i);
    }

    rep(j, M)
    {
        cin >> B.at(j);
    }

    int answer = 0;

    rep(i, N)
    {
        rep(j, M)
        {
            answer += (A.at(i) + B.at(j)) * max(A.at(i), B.at(j));
        }
    }

    cout << answer << endl;

    return 0;
}
