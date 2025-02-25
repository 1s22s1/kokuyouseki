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

    int N, X;
    cin >> N >> X;

    int answer = 1;
    int distance = 0;

    rep(i, N)
    {
        int l;
        cin >> l;
        distance += l;

        if (distance > X)
        {
            break;
        }

        answer++;
    }

    cout << answer << endl;

    return 0;
}
