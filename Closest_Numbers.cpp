#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> x;
    int tmp;
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> tmp;
        x.push_back(tmp);
    }
    sort(x.begin(), x.end());

    int diff = std::numeric_limits<int>::max();
    int currentDiff = 0;
    vector<int> start;
    vector<int> end;
    for (i = 0; i < n - 1; i++)
    {
        currentDiff = x[i + 1] - x[i];
        if (currentDiff < diff)
        {
            diff = currentDiff;
            while (!start.empty())
            {
                start.pop_back();
                end.pop_back();
            }
            start.push_back(x[i]);
            end.push_back(x[i + 1]);
        }
        else if (currentDiff == diff)
        {
            start.push_back(x[i]);
            end.push_back(x[i + 1]);
        }
    }

    for (i = 0; i < start.size(); i++)
    {
        cout << start[i] << " " << end[i] << " ";
    }
    return 0;
}