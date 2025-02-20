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

    int A, B, D;

    cin >> A >> B >> D;

    for (int i = A; i <= B; i += D)
    {
        cout << i << ' ';
    }

    cout << endl;

    return 0;
}
