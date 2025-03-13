#include <bits/stdc++.h>

using namespace std;

#define endl '\n';

int init()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    return 0;
}

int main()
{
    init();

    string ABCD;

    cin >> ABCD;

    int A = ABCD.at(0) - '0';
    int B = ABCD.at(1) - '0';
    int C = ABCD.at(2) - '0';
    int D = ABCD.at(3) - '0';

    if (A + B + C + D == 7)
    {
        cout << A << '+' << B << '+' << C << '+' << D << "=7" << endl;
        return 0;
    }

    if (A + B + C - D == 7)
    {
        cout << A << '+' << B << '+' << C << '-' << D << "=7" << endl;
        return 0;
    }

    if (A + B - C + D == 7)
    {
        cout << A << '+' << B << '-' << C << '+' << D << "=7" << endl;
        return 0;
    }

    if (A + B - C - D == 7)
    {
        cout << A << '+' << B << '-' << C << '-' << D << "=7" << endl;
        return 0;
    }

    if (A - B + C + D == 7)
    {
        cout << A << '-' << B << '+' << C << '+' << D << "=7" << endl;
        return 0;
    }

    if (A - B + C - D == 7)
    {
        cout << A << '-' << B << '+' << C << '-' << D << "=7" << endl;
        return 0;
    }

    if (A - B - C + D == 7)
    {
        cout << A << '-' << B << '-' << C << '+' << D << "=7" << endl;
        return 0;
    }

    if (A - B - C - D == 7)
    {
        cout << A << '-' << B << '-' << C << '-' << D << "=7" << endl;
        return 0;
    }

    return 0;
}
