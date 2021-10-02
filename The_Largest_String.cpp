#include <bits/stdc++.h>
using namespace std;
string getLaregestString(string s, long long k)
{
    vector<int> frequnce_array(26, 0);
    for (int i = 0; i < s.length(); i++)
    {
        frequnce_array[s[i] - 'a']++;
    }
    string ans = "";
    for (int i = 25; i > 0;)
    {
        if (frequnce_array[i] > k)
        {
            int temp = k;
            string st(1, i + 'a');
            while (temp > 0)
            {
                ans += st;
                temp--;
            }
            frequnce_array[i] -= k;
            int j = i - 1;
            while (frequnce_array[j] <= 0 && j >= 0)
            {
                j--;
            }
            if (frequnce_array[j] > 0 && j >= 0)
            {
                string str(1, j + 'a');
                ans += str;
                frequnce_array[j] -= 1;
            }
            else
            {
                break;
            }
        }
        else if (frequnce_array[i] > 0)
        {
            int temp = frequnce_array[i];
            frequnce_array[i] -= temp;
            string st(1, i + 'a');
            while (temp > 0)
            {
                ans += st;
                temp--;
            }
        }
        else
        {
            i--;
        }
    }
    return ans;
}
int main()
{

    string s;
    cin >> s;
    int k;
    cin >> k;
    cout << getLaregestString(s, k);
    return 0;
}