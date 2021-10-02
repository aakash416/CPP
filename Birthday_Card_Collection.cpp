#include <bits/stdc++.h>
using namespace std;

vector<int> hackerCards(vector<int> collection, int d)
{
    map<int, int> cards;
    for (int i = 0; i < collection.size(); i++)
    {
        cards[collection[i]] = 1;
    }

    vector<int> result;
    int end = d;
    for (int i = 1; i < end; i++)
    {
        if (d == 0)
            break;

        if (cards[i] != 1 && d >= i)
        {
            d -= i;
            result.push_back(i);
        }
    }
    return result;
}

int main()
{
    vector<int> collection = {1, 3, 4};
    int d = 7;

    vector<int> ans = hackerCards(collection, d);
    for (auto item : ans)
        cout << item << " ";
    cout << "\n";
}