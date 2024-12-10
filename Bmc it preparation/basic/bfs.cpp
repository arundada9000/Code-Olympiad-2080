#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(vector<vector<int>> &graph, int start)
{
    vector<bool> visited(graph.size(), false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int neighbor : graph[node])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main()
{
    // Example graph: 0->1->2, 1->3, 2->4, 3->4
    vector<vector<int>> graph = {{1}, {0, 3}, {4}, {4}, {}};

    cout << "BFS traversal starting from node 0: ";
    bfs(graph, 0);
    cout << endl;

    return 0;
}