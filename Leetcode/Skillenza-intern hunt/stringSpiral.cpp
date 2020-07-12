/*Given half-height h, and a string s output a rhombus pattern with a spiral in it formed using the characters in the string. Direction of the spiral is clockwise inward.
2
6 10
9876543210
3 5
abcde 
          4           
        5 5 3         
      6 6 0 4 2       
    7 7 1 9 9 3 1     
  8 8 2 0 2 8 8 2 0   
9 9 3 1 3 9 1 7 7 1 9 
  0 4 2 4 0 6 6 0 8   
    1 5 3 5 5 9 7     
      2 6 4 8 6       
        3 7 5         
          4           

    c     
  b e d   
a d c a e 
  c b a   
    b   


*/

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
