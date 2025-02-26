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

    bool is_display = true;

    for (char c : S)
    {

        if (c == '|')
        {
            is_display = !is_display;
        }

        if (is_display)
        {
            if (c != '|')
            {
                cout << c;
            }
        }
    }

    cout << endl;

    return 0;
}
