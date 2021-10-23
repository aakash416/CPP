/******************************************************************************
 Wael is well-known for how much he loves the bitwise XOR operation, while kaito is well known for how much he loves to sum numbers, so their friend Resli          decided to make up a problem that would enjoy both of them. Resil wrote down an array A of length N, an integer K and he defined a new function called  Xor-        sum as follows

Xor-sum(x)=(x XOR A[1])+(x XOR A[2])+(x XOR A[3])+…………..+(x XOR A[N])
    Can you find the integer x in the range [0,K] with the maximum Xor-sum (x) value?

    Print only the value.

    Input format

 The first line contains integer N denoting the number of elements in A.
The next line contains an integer, k, denoting the maximum value of x.
Each line i of the N subsequent lines(where 0<=i<=N) contains an integer describing Ai.
   Constraints

1<=N<=10^5
0<=K<=10^9
0<=A[i]<=10^9
   Sample Input 1
   1
   0
   989898
   Sample Output 1
   989898
   Explanation:
   Xor_sum(0)=(0^989898)=989898

   Sample Input 2
   3
   7
   1
   6
   3

   Sample Output 2
   14
   Explanation
    Xor_sum(4)=(4^1)+(4^6)+(4^3)=14.

    Sample Input 3
     4
     9
     7
     4
     0
     3

   Sample Output 3
   46
   Explanation:
   Xor_sum(8)=(8^7)+(8^4) +(8^0)+(8^3)=46.
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
unordered_map<int, int> L;
int main()
{
    int n, k, m;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        v[i] = m;
        int j = 0;
        while (m)
        {
            L[j] += (m & 1);
            m >>= 1;
            j++;
        }
    }
    int j = 0, K = k, ans = 0, ans2 = 0;
    while (K)
    {
        j++;
        K >>= 1;
    }
    for (int i = j; i > 0; i--)
    {
        if (L[i - 1] < n - L[i - 1])
            ans |= 1;
        ans <<= 1;
    }
    ans >>= 1;
    while (ans > k)
    {
        ans &= 0;
        ans <<= 1;
        k <<= 1;
    }
    for (auto i : v)
        ans2 += ans ^ i;
    cout << ans2;
}