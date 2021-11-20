/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;
int helpMichaelScott(int n)
{
    int pb = 0, ms, a;
    int s = 0, count = 0;
    ms = n;
    if (n == 1 || n == 2 || n == 3)
    {
        return 1;
    }
    else
    {
        while (s < n)
        {
            int i = 1;
            pb = 0;
            while (pb <= ms)
            {
                pb = pow(2, i);
                if (pb <= ms)
                {
                    a = pb;
                }
                i++;
            }
            s += a;
            ms = n - s;
            count++;
        }
        return count;
    }
}
int main()
{
    int n;
    cin >> n;
    cout << helpMichaelScott(n);
    return 0;
}
