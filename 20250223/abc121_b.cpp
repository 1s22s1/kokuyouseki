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

    int N, M, C;

    cin >> N >> M >> C;

    vector<int> B(M);

    rep(i, M)
    {
        cin >> B.at(i);
    }

    int answer = 0;

    rep(i, N)
    {

        int propertiy = C;

        rep(j, M)
        {
            int A;
            cin >> A;

            propertiy += A * B.at(j);
        }

        if (propertiy > 0)
        {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}
