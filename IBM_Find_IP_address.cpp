/******************************************************************************
Find IP address
*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;
int codewithvirus(string n)
{
    return stoi(n, 0, 16);
}
void decodeIP(string hexaIP)
{
    string s = "", s1 = "", s2 = "", s3 = "";
    s += hexaIP[0];
    s += hexaIP[1];
    s1 += hexaIP[2];
    s1 += hexaIP[3];
    s2 += hexaIP[4];
    s2 += hexaIP[5];
    s3 += hexaIP[6];
    s3 += hexaIP[7];

    int n = codewithvirus(s);
    if (hexaIP.size() <= 7)
        cout << "Invalid input";
    else
    {
        if (n > 1 && n <= 127)
        {
            cout << codewithvirus(s) << "." << codewithvirus(s1) << "." << codewithvirus(s2) << "." << codewithvirus(s3) << endl;
            cout << "A";
        }
        else if (n >= 128 && n <= 191)
        {
            cout << codewithvirus(s) << "." << codewithvirus(s1) << "." << codewithvirus(s2) << "." << codewithvirus(s3) << endl;
            cout << "B";
        }
        else if (n >= 192 && n <= 223)
        {
            cout << codewithvirus(s) << "." << codewithvirus(s1) << "." << codewithvirus(s2) << "." << codewithvirus(s3) << endl;
            cout << "C";
        }
        else if (n >= 224 && n <= 239)
        {
            cout << codewithvirus(s) << "." << codewithvirus(s1) << "." << codewithvirus(s2) << "." << codewithvirus(s3) << endl;
            cout << "D";
        }
        else if (n >= 240 && n <= 255)
        {
            cout << codewithvirus(s) << "." << codewithvirus(s1) << "." << codewithvirus(s2) << "." << codewithvirus(s3) << endl;
            cout << "D";
        }
    }
}

int main()
{
    string hexaIP;
    getline(cin, hexaIP);
    decodeIP(hexaIP);
    return 0;
}