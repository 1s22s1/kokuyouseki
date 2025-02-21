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

    rep(i, N)
    {
        string W;

        cin >> W;

        if (W == "and" || W == "not" || W == "that" || W == "the" || W == "you")
        {
            cout << "Yes" << endl;

            return 0;
        }
    }

    cout << "No" << endl;

    return 0;
}
