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

    rep(i, N)
    {
        cin >> A.at(i);
    }

    int answer = 0;

    rep(i, M)
    {
        int target;

        cin >> target;

        answer += A.at(target - 1);
    }

    cout << answer << endl;

    return 0;
}
