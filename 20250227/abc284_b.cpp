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

int odd_count(vector<int> A)
{
    int count = 0;

    for (auto a : A)
    {
        if (a % 2 == 1)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    init();

    int T;

    cin >> T;

    rep(i, T)
    {
        int N;
        vector<int> A;

        cin >> N;

        rep(i, N)
        {
            int a;
            cin >> a;

            A.push_back(a);
        }

        cout << odd_count(A) << endl;
    }

    return 0;
}
