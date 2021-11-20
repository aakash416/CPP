/******************************************************************************
Help Michael Scott

Michael Scott is the manager of Dunder Mifflin Paper Company. His office desk is situated at Nth floor of the office. He takes a lift to reach his floor. Now the lift can only move upwards in powers of 2 (like it can move 1 floor upwards or 2 floors or 4 floors upwards etc.) in one move. Michael has to attend a very important meeting. Help him to reach his office floor in minimum no. of moves possible.

Let's say Michael's office is situated at 5th floor. There are several ways in which he can reach his office. One of the ways is that in first move, the lift can move 2 floors up and reach 2nd floor. Then in next move. again lift moves 2 floors up and reaches 4th floor. And finally, from 4th floor, lift moves 1 floor up and reaches 5th floor. Total moves taken is 3.

Another way is that in first move, lift can move 4 floors up and reach 4th floor. Then in next move, lift moves 1 floor up and reaches 5th floor. Total moves taken is 2. We have to return the minimum no; of moves in which Michael can reach his office. In this case it is 2

Input Format

• Input test case contains a single number N denoting the office floor of Michael Scott.

Output Format

• Output a single number, containing the minimum number of moves required by Michael Scott to reach the Nth floor

Input 1

5

Output 

2

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;
int HelpMichaelScott(int n)
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
    cout << HelpMichaelScott(n);
    return 0;
}
