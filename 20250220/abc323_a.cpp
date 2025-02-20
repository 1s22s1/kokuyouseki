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

    string S;

    cin >> S;

    for (int i = 1; i < 16; i += 2)
    {
        if (S.at(i) != '0')
        {
            cout << "No" << endl;

            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
