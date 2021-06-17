/******************************************************************************
Given a number K and a string Str containing lower case letters, write a program to find the Kh lexicographical character S and the number of occummon attrak string. Multiple occurrences of characters need to be considered while computing the Kh character.

Lexicographical order, also called dictionary order, is a generalization of the way words are alphabetically ordered based on the alphabetical onder of their st

Read the input from STDIN and print the output to STDOUT. Do not write arbitrary strings while reading the input or while printing, as these contribute to the s

Constraint:

1) 1 <= K <= String Length

(1) There are no special symbols or spaces in the input string

Input Format:

The first line of input contains Str

The second line of input contains K

Output Format:

The first line of output contains S

The second line of output contains N

Sample Input:

ajfdkisabdevg

4

Sample Output1

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;
int main()
{
    string str;
    cin >> str;
    int k;
    cin >> k;
    int n = 0;
    sort(str.begin(), str.end());
    char ch = str.at(k - 1);

    cout << ch << endl;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ch)
        {
            n++;
        }
    }
    cout << n;

    return 0;
}
