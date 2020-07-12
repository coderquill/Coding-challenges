#include <bits/stdc++.h>
using namespace std;

main()
{
    ios::sync_with_stdio(false), cin.tie(0);

    int t = 1, h, l;
    cin >> t;
    int tc = t;
    while (t--)
    {
        // cout << "Case #" << tc - t << ": ";
        cin >> h >> l;
        string s;
        cin >> s;
        char a[2 * h - 1][2 * h - 1];
        for (int i = 0; i < 2 * h - 1; i++)
        {
            for (int j = 0; j < 2 * h - 1; j++)
            {
                a[i][j] = ' ';
            }
        }

        int k = 0;
        int r = 0;
        int i, j;

        while (r < h)
        {

            j = r;
            i = h - 1;
            while ((j <= 2 * h - 2) && (i >= r))
            {
                if (k >= l)
                {
                    k = k % l;
                }
                a[i][j] = s.at(k);
                k++;
                i--;

                j++;
            }
            i = r + 1;
            j = h;
            while ((j <= 2 * h - 2 - r) && (i < h))
            {

                if (k >= l)
                {
                    k = k % l;
                }
                a[i][j] = s.at(k);
                k++;
                i++;
                j++;
            }

            j = 2 * h - 3 - r;
            i = h;
            while ((j > r) && (i <= 2 * h - 2 - r))
            {

                if (k >= l)
                {
                    k = k % l;
                }
                a[i][j] = s.at(k);
                k++;
                i++;
                j--;
            }
            j = h - 2;
            ;
            i = 2 * h - 3 - r;
            while ((j > r) && (i >= h))
            {

                if (k >= l)
                {
                    k = k % l;
                }
                a[i][j] = s.at(k);
                k++;
                i--;
                j--;
            }
            r++;
        }
        for (int i = 0; i < 2 * h - 1; i++)
        {
            for (int j = 0; j < 2 * h - 1; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}
