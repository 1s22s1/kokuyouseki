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
    string S;

    cin >> N;
    cin >> S;

    for (int i = 0; i < N - 1; i++)
    {
        if (S.at(i + 1) == 'J')
        {
            cout << S.at(i) << endl;
        }
    }

    return 0;
}
