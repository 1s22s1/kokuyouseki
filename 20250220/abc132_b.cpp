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

    int n;

    cin >> n;

    vector<int> p(n);

    rep(i, n)
    {
        cin >> p.at(i);
    }

    int answer = 0;

    rep(i, n - 2)
    {
        if ((p.at(i) < p.at(i + 1) && p.at(i + 1) < p.at(i + 2)) || (p.at(i + 2) < p.at(i + 1) && p.at(i + 1) < p.at(i)))
        {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}
