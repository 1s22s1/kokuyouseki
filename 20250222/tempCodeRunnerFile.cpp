  rep(i, H)
    {
        rep(j, W)
        {
            if (A.at(i).at(j) == 0)
            {
                cout << '.';
            }
            else
            {
                cout << 'A' + (i - 1);
            }
        }

        cout << endl;
    }