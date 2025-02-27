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

    string A, B;

    cin >> A >> B;

    if (A.size() > B.size())
    {
        cout << "GREATER" << endl;

        return 0;
    }
    else if (A.size() < B.size())
    {
        cout << "LESS" << endl;

        return 0;
    }

    if (A > B)
    {
        cout << "GREATER" << endl;
    }
    else if (B < A)
    {
        cout << "LESS" << endl;
    }
    else if (A == B)
    {
        cout << "EQUAL" << endl;
    }

    return 0;
}
