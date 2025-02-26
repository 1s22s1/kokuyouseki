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

    cin >> N >> S;

    int index = S.find("ABC");

    if (index != string::npos)
    {
        cout << index + 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
