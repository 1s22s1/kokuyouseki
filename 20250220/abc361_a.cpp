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

    int N, K, X;

    cin >> N >> K >> X;

    vector<int> A;

    rep(i, N)
    {
        int num;

        cin >> num;

        A.push_back(num);
    }

    A.insert(A.begin() + K, X);

    for (int a : A)
    {
        cout << a << ' ';
    }

    cout << endl;

    return 0;
}
