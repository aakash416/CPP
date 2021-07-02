// 5 4 3 3
// 1 3
// 1 2
// 2 4
// 3 5
// -1
#include <bits/stdc++.h>
#include <list>
using namespace std;

int firstmin = INT_MAX, secondmin = INT_MAX;

class Graph
{
    int V;
    list<int> *adj;

    void printAllPathsUtil(int, int, bool[], int[], int &);

public:
    Graph(int V);
    void addEdge(int u, int v);
    void printAllPaths(int s, int d);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int u, int v)
{
    adj[u].push_back(v);
}

void Graph::printAllPaths(int s, int d)
{

    bool *visited = new bool[V];

    int *path = new int[V];
    int path_index = 0;

    for (int i = 0; i < V; i++)
        visited[i] = false;

    printAllPathsUtil(s, d, visited, path, path_index);
}

void Graph::printAllPathsUtil(int u, int d, bool visited[],
                              int path[], int &path_index)
{

    visited[u] = true;
    path[path_index] = u;
    path_index++;

    if (u == d)
    {
        int len = 0;
        for (int i = 0; i < path_index; i++)
        {
            //    cout << path[i] << " ";
            len++;
        }
        //   cout << endl;
        if (len < firstmin)
        {
            secondmin = firstmin;
            firstmin = len;
        }
        if (len > firstmin && len < secondmin)
        {
            secondmin = len;
        }
    }
    else
    {

        list<int>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); ++i)
            if (!visited[*i])
                printAllPathsUtil(*i, d, visited, path, path_index);
    }

    path_index--;
    visited[u] = false;
}

int main()
{

    int n, m, t, c;
    cin >> n >> m >> t >> c;

    int u, v;
    Graph g(n);
    while (m--)
    {
        cin >> u >> v;
        g.addEdge(u, v);
    }

    int s = 1, d = 5;

    g.printAllPaths(s, d);
    //  cout<<endl;
    //  cout<<firstmin<<" "<<secondmin;
    //  cout<<endl;
    if (secondmin == INT_MAX)
    {
        cout << -1;
        return 0;
    }

    int gau = secondmin;
    //  cout<<secondmin<<endl;

    vector<int> arr(100000);
    arr[0] = 0;

    int color = 1;
    for (int i = 0; i < 100000;)
    {

        int j = i;
        int xx = j + t;
        if (color == 1)
        {
            while (j < xx && j < 100000)
            {
                arr[j++] = 1;
                i++;
            }
            color = 0;
        }
        else
        {
            while (j < xx && j < 100000)
            {
                arr[j++] = 0;
                i++;
            }
            color = 1;
        }
    };

    int ans = 0;
    secondmin--;
    int index = 0;
    while (secondmin--)
    {
        ans += c;
        index += c;
        int j = index + 1;
        while (arr[j] == 0)
        {
            ans++;
            index++;
            j++;
        }
    }
    cout << ans;

    return 0;
}
