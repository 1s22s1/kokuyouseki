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

int f(int x)
{
    if (x == 0)
    {
        return 1;
    }

    return x * f(x - 1);
}

int main()
{
    init();

    int N;

    cin >> N;

    cout << f(N) << endl;

    return 0;
}
