/******************************************************************************
Boolean Algebra is a branch of mathematics which deals with the binary
numbers and have few operators defined for it. Some of the widely used
operators on binary numbers are XOR, SHL (Shift Left), SHR (Shift Right)
etc. The below table depicts the operators that are availa and to be used
for this question.
Sample Input1:
00011101 XOR 00000011
Sample Output2:
00011110
Sample Input1:
AND 01010101
Sample Output2:
Invalid input
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string left = "", medil = "", right = "", rightor = "";
    if (s.size() == 21)
    {
        left = s.substr(0, 8);
        medil = s.substr(9, 3);
        right = s.substr(13, 8);
    }
    else if (s.size() == 20)
        rightor = s.substr(12, 8);
    if (medil == "XOR")
    {
        auto result = bitset<8>(left) ^ bitset<8>(right);
        cout << result;
    }
    else if (medil == "AND")
    {
        auto result = bitset<8>(left) & bitset<8>(right);
        cout << result;
    }
    else if (medil == "OR")
    {
        auto result = bitset<8>(left) | bitset<8>(rightor);
        cout << result;
    }
    else
        cout << "Invalid input";

    return 0;
}
