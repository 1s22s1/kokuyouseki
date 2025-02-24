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

    cin >> N;

    vector<int> A(N);
    vector<int> B(N);

    rep(i, N)
    {
        cin >> A.at(i);
        cin >> B.at(i);
    }

    int answer = 100000 + 1;

    int max_value = max(*min_element(A.begin(), A.end()), *min_element(B.begin(), B.end()));
    answer = min(answer, max_value);

    rep(i, N)
    {
        answer = min(answer, A.at(i) + B.at(i));
    }

    cout << answer << endl;

    return 0;
}
