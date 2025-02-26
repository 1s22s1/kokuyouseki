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

    int K;
    string S;

    cin >> K >> S;

    if (S.size() <= K)
    {
        cout << S << endl;
    }
    else
    {
        cout << S.substr(0, K) << "..." << endl;
    }

    return 0;
}
