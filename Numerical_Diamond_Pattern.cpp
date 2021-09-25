/******************************************************************************
Numerical Diamond

Examples: 

Input:  5   
    1
   121
  12321
 1234321
123454321
 1234321
  12321
   121
    1
    
    


*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, r, c, sp;
    cin >> num;
    for (r = 1; r <= num; r++)
    {
        for (sp = num - r; sp >= 1; sp--)
        {
            cout << " ";
        }
        for (c = 1; c <= r; c++)
        {
            cout << c;
        }
        for (c = r - 1; c >= 1; c--)
        {
            cout << c;
        }
        cout << endl;
    }
    for (r = 1; r <= num; r++)
    {
        for (sp = r; sp >= 1; sp--)
        {
            cout << " ";
        }
        for (c = 1; c <= (num - r); c++)
        {
            cout << c;
        }
        for (c = num - r - 1; c >= 1; c--)
        {
            cout << c;
        }
        cout << endl;
    }
}