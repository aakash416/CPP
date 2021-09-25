/******************************************************************************

Given an undirected graph of V vertices and E edges and another edge (c-d), the task
is to find if the given edge is a bridge in graph, i.e., removing the edge disconnects the graph.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void DFS(vector<int> adj[], int v, bool visited[])
    {
        visited[v] = true;
        vector<int>::iterator i;
        for (i = adj[v].begin(); i != adj[v].end(); ++i)

            if (!visited[*i])
                DFS(adj, *i, visited);
    }
    bool isConnected(vector<int> adj[], int V, int one, int two)
    {

        bool visited[V] = {0};
        memset(visited, false, sizeof(visited));

        DFS(adj, one, visited);

        if (visited[two] == false)
            return false;
        return true;
    }
    int isBridge(int V, vector<int> adj[], int c, int d)
    {
        if (!isConnected(adj, V, c, d))
            return 0;
        else
        {
            adj[c].erase(remove(adj[c].begin(), adj[c].end(), d), adj[c].end());
            adj[d].erase(remove(adj[d].begin(), adj[d].end(), c), adj[d].end());

            if (isConnected(adj, V, c, d))
                return 0;
            else
                return 1;
        }
    }
};
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        int i = 0;
        while (i++ < E)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int c, d;
        cin >> c >> d;
        Solution obj;
        cout << obj.isBridge(V, adj, c, d) << "\n";
    }

    return 0;
}
