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

    cin >> N;
    cin >> S;

    int answer = 0;
    int cur_pos = 1;

    for (char c : S)
    {
        if (c == 'L')
        {
            if (cur_pos != 1)
            {
                cur_pos--;
            }
        }
        else
        {
            if (cur_pos == 1)
            {
                cur_pos++;
            }
            else if (cur_pos == 2)
            {
                cur_pos++;
                answer++;
            }
            else if (cur_pos == 3)
            {
                answer++;
            }
        }
    }

    cout << answer << endl;

    return 0;
}
