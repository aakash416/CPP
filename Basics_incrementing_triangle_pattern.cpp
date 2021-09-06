/******************************************************************************

1
2*3
4*5*6
7*8*9*10
7*8*9*10
4*5*6
2*3
1

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int i, j, r, count2, codewithvirus, count1;
    codewithvirus = 0;
    count2 = 0;
    cin >> r;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j <= i; j++)
        {
            count2++;
            if (j != 0)
                cout << "*" << count2;
            else
                cout << count2;
        }
        cout << endl;
    }

    for (i = 1; i <= r; i++)
    {
        codewithvirus += i;
    }
    for (i = 0; i < r; i++)
    {
        codewithvirus = codewithvirus - r + i;
        count1 = codewithvirus;
        for (j = r; j > i; j--)
        {
            codewithvirus++;
            if (j != r)
                cout << "*" << codewithvirus;
            else
                cout << codewithvirus;
        }
        cout << endl;
        codewithvirus = count1;
    }
    return 0;
}
