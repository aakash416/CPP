#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    static int i = 2;
    if (n == 0 || n == 1)
        return false;
    if (n == i)
        return true;
    if (n % i == 0)
        return false;
    i++;
    return isPrime(n);
}
int main()
{
    string s;
    cin >> s;
    int n, count = 0;
    cin >> n;
    for (int i = 0; i < s.size(); i += n)
    {
        if (isPrime(stoi(s.substr(i, n))))
        {
            cout << s.substr(i, n) << endl;
            count++;
        }
    }
    if (count == 0)
        cout << "NA";
    return 0;
}
