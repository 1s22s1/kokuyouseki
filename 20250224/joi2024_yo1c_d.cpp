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

    int K, N;

    cin >> K >> N;

    vector<int> A(N);

    rep(i, N)
    {
        cin >> A.at(i);
    }

    int M;

    cin >> M;

    vector<int> B(M);

    rep(i, M)
    {
        cin >> B.at(i);
    }

    int answer = 0;

    rep(i, N)
    {
        rep(j, M)
        {
            if (A.at(i) + K == B.at(j))
            {
                answer++;
            }
        }
    }

    cout << answer << endl;

    return 0;
}
