/******************************************************************************
Given an integer matrix, R x C, traverse it in the order as shown below:

Input Format:

One line containing two integers R and C representing the dimensions of the matrix M as rows R, and columns C, respectively.

R Lines, each containing C space separated number of integers which collectively form the matrix data.

Output Format:

Single line containing integers, representing the desired traversal.

Constraints:

0<Ŕ<50

0<C<50

Sample Input

11

1

Sample Output

1

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int mat[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    int k = 0, l = 0;
    {
        int last_row = m - 1, last_col = n - 1;
        while (k <= last_row && l <= last_col)
        {
            for (int i = l; i <= last_col; i++)
            {
                cout << mat[k][i];
            }
            k++;
            for (int i = k; i <= last_row; i++)
            {
                cout << mat[i][last_col];
            }
            last_col--;
            if (k <= last_col)
            {
                for (int i = last_col; i >= l; i--)
                {
                    cout << mat[last_row][i];
                }
                last_row--;
            }
            if (l <= last_col)
            {
                for (int i = last_row; i >= k; i--)
                {
                    cout << mat[i][l];
                }
                l++;
            }
        }
    }
    return 0;
}
