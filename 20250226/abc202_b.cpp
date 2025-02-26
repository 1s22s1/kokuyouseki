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

    reverse(S.begin(), S.end());

    for (auto c : S)
    {
        if (c == '6')
        {
            cout << '9';
        }
        else if (c == '9')
        {
            cout << '6';
        }
        else
        {
            cout << c;
        }
    }

    cout << endl;

    return 0;
}
