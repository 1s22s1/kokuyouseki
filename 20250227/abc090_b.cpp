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

    int A, B;

    cin >> A >> B;

    int answer = 0;

    for (int i = A; i <= B; i++)
    {
        string reverse_string = to_string(i);
        reverse(reverse_string.begin(), reverse_string.end());

        if (to_string(i) == reverse_string)
        {
            answer++;
        }
    }

    cout << answer << endl;

    return 0;
}
