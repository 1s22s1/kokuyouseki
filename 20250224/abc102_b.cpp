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

    rep(i, N)
    {
        cin >> A.at(i);
    }

    int answer = 0;

    rep(i, N)
    {
        for (int j = i + 1; j < N; j++)
        {
            answer = max(answer, abs(A.at(i) - A.at(j)));
        }
    }

    cout << answer << endl;

    return 0;
}
