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

    string S;

    cin >> S;

    for (int i = 0; i < N - 1;)
    {
        string sub_str = S.substr(i, i + 1);

        if (S.at(i) == 'n' && S.at(i + 1) == 'a')
        {
            cout << "nya";
            if (i == N - 3)
            {
                cout << S.at(i + 2);
            }
            i += 2;
        }
        else
        {
            cout << S.at(i);

            if (i == N - 2)
            {
                cout << S.at(i + 1);
            }
            i += 1;
        }
    }

    cout << endl;

    return 0;
}
