#include <stdio.h>

#define INF 9999

int main()
{
    int graph[10][10];
    int distance[10], visited[10];
    int n, source;
    int i, j, count, min, next;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter the weighted adjacency matrix:\n");
    printf("Enter 0 if there is no direct edge.\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &graph[i][j]);

            if(graph[i][j] == 0 && i != j)
                graph[i][j] = INF;
        }
    }

    printf("Enter the source vertex (1 to %d): ", n);
    scanf("%d", &source);

    source = source - 1;

    for(i = 0; i < n; i++)
    {
        distance[i] = graph[source][i];
        visited[i] = 0;
    }

    distance[source] = 0;
    visited[source] = 1;

    for(count = 1; count < n; count++)
    {
        min = INF;
        next = -1;

        for(i = 0; i < n; i++)
        {
            if(!visited[i] && distance[i] < min)
            {
                min = distance[i];
                next = i;
            }
        }

        if(next == -1)
            break;

        visited[next] = 1;

        for(i = 0; i < n; i++)
        {
            if(!visited[i] &&
               graph[next][i] != INF &&
               distance[next] + graph[next][i] < distance[i])
            {
                distance[i] = distance[next] + graph[next][i];
            }
        }
    }

    printf("\nShortest distances from vertex %d:\n", source + 1);

    for(i = 0; i < n; i++)
    {
        if(distance[i] == INF)
            printf("Vertex %d : No path\n", i + 1);
        else
            printf("Vertex %d : %d\n", i + 1, distance[i]);
    }

    return 0;
}