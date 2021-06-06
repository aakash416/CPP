/******************************************************************************

SSI  6 jun 2021


So Many Plots

Your friend is a property tycoon and owns many plots of a given area.

However, he wants to merge the plots to make one big plot, for which he goes to an Agent

The agent tells him that in one operation, any two plots can be merged, and in return, he will receive one plot of area A Ay (Where A and Ay are the areas of two plots merged in one operation) and the resulting plot will be added to his

inventory of plots again, but the cost of one operation is equal to the merged area i.e. Cost = A + A

This operation can be performed until he is left with one plot.

Help him merge the plots such that in the end, he is left with one plot whose area is the sum of all his current plots, but the

cost shall remain minimum.

Also, let him know if it is profitable to merge the plots.

You are given the cost per unit area of each plot

The total cost of the plots =

Area cost per unit area

He considers it profitable to merge them if the cost to merge the plots is less than the total cost of the plots

Example

Assumptions

- N=2

• array plots = [10, 201

• array costs_arr = [1,1]

Approach

The total cost of the plots Area cost per unit area

The cost to merge the plots [10, 20) is 10+ 20 = 30

10 x 120 x 1-30

As Cost to merge the plots is not less than the Total cost of the plots. Therefore it is not profitable to merge them.

Function description

Function description

Complete the solution function provided in the editor. This function takes the following 3 parameters and prethwin, in the first line print minimum cost to merge all the plots and the next line print YES if it is profitable to merge the plots

otherwise print NO

N Represents the number of plots

• plots Represents the array of length N denoting the areas of each plot

• costs_arr Represents the array of length N denoting the cost per unit area of each plot

Input

Note: This is the input format that you must use to provide custom input (available above the Compile and Test button)

• The first line contains N, the number of plots

The next line contains N integers, which denote the areas of each plot separated by space.

The next line contains N integers, denote the Cost per unit area of each plot separated by space.

Output

print two lines, print the minimum cost to achieve one plot of the area after merging all the plots and the next line pant

YES if it is profitable to merge the plots otherwise print NO

Constraints

Constraints

ISN'S 104

154²5104

13 Cost per unit Area 5 10

Code snippets (also called starter code/bollerplate code)

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, plots[n], cost[n], c = 0, r = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> plots[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> cost[i];
    }
    for (int i = 0; i < n; i++)
    {
        c += cost[i];
    }

    for (int i = 0; i < n; i++)
    {
        r += plots[i] * cost[i];
    }
    cout << r<<endl;

    if (c < r)
    {
        cout << "YES";
    }

    else
    {
        cout << "NO";
    }

    return 0;
}
