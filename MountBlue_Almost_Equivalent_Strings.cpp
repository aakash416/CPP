/******************************************************************************

 MountBlue 18 April 2021
 
 
Almost Equivalent Strings

Two strings are considered "almost equivalent" if they have the same length AND for each lowercase letter x, the number of occurrences of x in the two strings differs by no more than 3. There are two string arrays, s and i, that each

contains n strings. Strings s[i] and t[i] are the th pair of strings. They are of equal length and consist of lowercase English letters. For each pair of strings, determine if they are almost equivalent.

Example

s=['aabaab', 'aaaaabb']

t = ['bbabbc', 'abb]

Occurrences of 'a' in s[0]=4 and in t[0] = 1,

difference is 3

Occurrences of 'b'in s[0]= 2 and in t[0]= 4, difference is 2

Occurrences of 'c'in s[0]= 0 and in t[0] = 1,

difference is 1

The number of occurrences of 'a', 'b' and 'in the two strings never differs by more than 3, This pair is almost equivalent so the return

value for this case is 'YES'

Occurrences of a in s[1]=5 and in t[1] = 1,

difference is 4

Occurrences of 'b'in s[1] 2 and in t[1] =2, difference is 0.

The difference in the number of occurrences of alis greater than 3 so the return value for this

case is 'NO

The return array is [YES "NO]

Function Description

Complete the function areAlmostEquivalent in

the editor below.

areAlmostEquivalent has the following

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

vector<string> areAlmostEquivalent(vector<string> s, vector<string> t) {

    vector<string> result;

    for (int strIdx = 0; strIdx < s.size(); strIdx++) {
        int countAlpa_s[27] = { 0, };
        int countAlpa_t[27] = { 0, };

        for (int charIdx = 0; charIdx < s[strIdx].size(); charIdx++)
            countAlpa_s[s[strIdx][charIdx] - 'a']++;

        for (int charIdx = 0; charIdx < t[strIdx].size(); charIdx++)
            countAlpa_t[t[strIdx][charIdx] - 'a']++;

        int alpaIdx = 0;
        for (; alpaIdx< 26; alpaIdx++)
            if (abs(countAlpa_s[alpaIdx] - countAlpa_t[alpaIdx]) > 3) break;

        alpaIdx == 26 ? result.push_back("YES") : result.push_back("NO");
    }
    return result;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s_count_temp;
    getline(cin, s_count_temp);

    int s_count = stoi(ltrim(rtrim(s_count_temp)));

    vector<string> s(s_count);

    for (int i = 0; i < s_count; i++) {
        string s_item;
        getline(cin, s_item);

        s[i] = s_item;
    }

    string t_count_temp;
    getline(cin, t_count_temp);

    int t_count = stoi(ltrim(rtrim(t_count_temp)));

    vector<string> t(t_count);

    for (int i = 0; i < t_count; i++) {
        string t_item;
        getline(cin, t_item);

        t[i] = t_item;
    }

    vector<string> result = areAlmostEquivalent(s, t);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
