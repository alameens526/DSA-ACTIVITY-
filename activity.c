#include <stdio.h>

#define MAX 20

int graph[MAX][MAX];
int visited[MAX];
int n;

void BFS(int start, int target)
{
    int queue[MAX], front = 0, rear = 0;
    int found = 0;

    for (int i = 0; i < n; i++)
        visited[i] = 0;

    queue[rear++] = start;
    visited[start] = 1;

    printf("BFS Traversal: ");

    while (front < rear)
    {
        int node = queue[front++];
        printf("%d ", node);

        if (node == target)
            found = 1;

        for (int i = 0; i < n; i++)
        {
            if (graph[node][i] && !visited[i])
            {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }

    printf("\nBFS: File %s\n",
           found ? "FOUND" : "NOT FOUND");
}

void DFS(int node, int target, int *found)
{
    visited[node] = 1;
    printf("%d ", node);

    if (node == target)
        *found = 1;

    for (int i = 0; i < n; i++)
    {
        if (graph[node][i] && !visited[i])
            DFS(i, target, found);
    }
}

int main()
{
    int edges, u, v, start, target;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    for (int i = 0; i < edges; i++)
    {
        printf("Enter edge (u v): ");
        scanf("%d %d", &u, &v);

        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    printf("Enter starting node: ");
    scanf("%d", &start);

    printf("Enter target file node: ");
    scanf("%d", &target);

    BFS(start, target);

    for (int i = 0; i < n; i++)
        visited[i] = 0;

    int found = 0;

    printf("DFS Traversal: ");
    DFS(start, target, &found);

    printf("\nDFS: File %s\n",
           found ? "FOUND" : "NOT FOUND");

    return 0;
}
