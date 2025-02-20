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

    int count = 0;

    rep(i, N)
    {
        int D1, D2;

        cin >> D1 >> D2;

        if (D1 == D2)
        {
            count++;
        }
        else
        {
            count = 0;
        }

        if (count >= 3)
        {
            cout << "Yes" << endl;

            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}
