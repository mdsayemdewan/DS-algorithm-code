#include <stdio.h>
#include <stdlib.h>


struct AdjListNode {
    char dest;
    struct AdjListNode* next;
};

struct AdjList {
    struct AdjListNode* head;
};

struct Graph {
    int V;
    struct AdjList* array;
};

struct AdjListNode* newAdjListNode(char dest) {
    struct AdjListNode* newNode = (struct AdjListNode*)malloc(sizeof(struct AdjListNode));
    newNode->dest = dest;
    newNode->next = NULL;
    return newNode;
}

struct Graph* createGraph(int V) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->V = V;
    graph->array = (struct AdjList*)malloc(V * sizeof(struct AdjList));

    int i;
    for (i = 0; i < V; ++i)
        graph->array[i].head = NULL;

    return graph;
}

void addEdge(struct Graph* graph, char src, char dest) {
    int srcIndex = src - 'a';
    int destIndex = dest - 'a';

    struct AdjListNode* newNode = newAdjListNode(dest);
    newNode->next = graph->array[srcIndex].head;
    graph->array[srcIndex].head = newNode;

    newNode = newAdjListNode(src);
    newNode->next = graph->array[destIndex].head;
    graph->array[destIndex].head = newNode;
}

void printGraph(struct Graph* graph) {
    int v;
    for (v = 0; v < graph->V; ++v) {
        struct AdjListNode* pCrawl = graph->array[v].head;
        printf("\n Adjacency list of vertex %c\n head ", 'a' + v);
        while (pCrawl) {
            printf("-> %c", pCrawl->dest);
            pCrawl = pCrawl->next;
        }
        printf("\n");
    }
}

int main() {
    int V = 5;
    struct Graph* graph = createGraph(V);
    addEdge(graph, 'a', 'b');
    addEdge(graph, 'a', 'e');
    addEdge(graph, 'b', 'c');
    addEdge(graph, 'b', 'd');
    addEdge(graph, 'b', 'e');
    addEdge(graph, 'c', 'd');
    addEdge(graph, 'd', 'e');

    printGraph(graph);


}
