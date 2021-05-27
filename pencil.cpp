/******************************************************************************
Problem Statement

Alex springfield uses pencils to complete his school activities. He used 1 pencil during his first standard, 9 pencils during second and 36 pencils during third standard and so on.

Write a program to find out the number of pencils used by Alex given the standard he is studying. Note: If the standard is negative or greater than 12, display 0

Input

One integer representing the standard

Output

Number of pencils used

Example 1:

Input

5
 output
 225

*******************************************************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int p, c = 0;
    cin >> p;
    if (p < 1 || p > 12)
    {
        cout << "0";
    }
    else
    {
        for (int i = 1; i <= p; i++)
        {
            c += pow(i, 3);
        }

        cout << c;
    }
    return 0;
}
