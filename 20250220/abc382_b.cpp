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

    int N, D;
    string S;

    cin >> N >> D;
    cin >> S;

    vector<int> indexes;

    rep(i, N)
    {
        if (S.at(i) == '@')
        {
            indexes.push_back(i);
        }
    }

    rep(i, D)
    {
        if (!indexes.empty())
        {
            indexes.pop_back();
        }
    }

    rep(i, N)
    {
        if (find(indexes.begin(), indexes.end(), i) != indexes.end())
        {
            cout << '@';
        }
        else
        {
            cout << '.';
        }
    }

    cout << endl;

    return 0;
}
