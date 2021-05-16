/*
 Given a Square Matrix of size M x M. Write a Program to print the matrix when it is Rotated Anticlockwise N Times.
*/

#include <iostream>
using namespace std;
int main()
{
    int M;
    int N;
    cin >> M >> N;
    int matt[M][M];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> matt[i][j];
        }
    }
    if (N % 4 == 1)
    {
        for (int i = M - 1; i >= 0; i--)
        {
            for (int j = 0; j < M; j++)
            {
                cout << matt[j][i] << " ";
            }
            cout << endl;
        }
    }
    else if (N % 4 == 2)
    {
        for (int i = M - 1; i >= 0; i--)
        {
            for (int j = M - 1; j >= 0; j--)
            {
                cout << matt[i][j] << " ";
            }
            cout << endl;
        }
    }
    else if (N % 4 == 3)
    {
        for (int i = 0; i < M; i++)
        {
            for (int j = M - 1; j >= 0; j--)
            {
                cout << matt[j][i] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < M; j++)
            {
                cout << matt[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
