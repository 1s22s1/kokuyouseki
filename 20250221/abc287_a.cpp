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

    int yes = 0;
    int no = 0;

    int N;

    cin >> N;

    rep(i, N)
    {
        string S;
        cin >> S;

        if (S == "For")
        {
            yes++;
        }
        else
        {
            no++;
        }
    }

    if (yes > no)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
