/******************************************************************************
Triangular Farms

input
n ->        10
arr ->      5 6 8 10 2 9 3 7 1 4
target ->   15

output      6

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    int count = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] < target && ((arr[j] + arr[k]) > arr[i]) &&
                    ((arr[i] + arr[k]) > arr[j]) && ((arr[i] + arr[j]) > arr[k]))
                {
                    count++;
                }
            }
        }
    }
    cout << count;
    return 0;
}
