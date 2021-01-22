#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int n;
vector<pair<int, int>> arr[10001];
bool visited[10001] = {false,};
int wide = 0;
int farthestNode = 0;

void dfs(int start, int weight)
{
    if (visited[start])
        return;
    visited[start] = true;

    if (weight > wide)
    {
        wide = weight;
        farthestNode = start;
    }

    for (int i = 0; i < arr[start].size(); i++)
    {
        dfs(arr[start][i].first, weight + arr[start][i].second);
    }
}

int main()
{
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        int parent, child, weight;
        cin >> parent >> child >> weight;
        arr[parent].push_back({child, weight});
        arr[child].push_back({parent, weight});
    }

    dfs(1, 0); //root에서 가장 먼 node를 찾는다
    memset(visited, false, sizeof(visited));
    wide = 0;
    dfs(farthestNode, 0); //가장 먼것에서 젤 먼 노드를 찾는다.

    cout << wide << "\n";

    return 0;
}