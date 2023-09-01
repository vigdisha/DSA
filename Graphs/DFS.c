#include <stdio.h>
#include <stdlib.h>

struct Node
{
 int data;
 struct Node *next;

}*front=NULL,*rear=NULL;
void enqueue(int x)
{
 struct Node *t;
 t=(struct Node*)malloc(sizeof(struct Node));
 if(t==NULL)
 printf("Queue is FUll\n");
 else
 {
 t->data=x;
 t->next=NULL;
 if(front==NULL)
 front=rear=t;
 else
 {
 rear->next=t;
 rear=t;
 }
 }

}
int dequeue()
{
 int x=-1;
 struct Node* t;

 if(front==NULL)
 printf("Queue is Empty\n");
 else
 {
 x=front->data;
 t=front;
 front=front->next;
 free(t);
 }
 return x;
}
int isEmpty()
{
 return front==NULL;
}



void DFS(int G[][7], int start, int n){
    static int visited[7] = {0};
    if(visited [start] ==0){
    printf("%d", start);
    visited[start] =1;
    }
    for(int v=1; v<n;v++){
        if(G[start][v]==1 && visited[v] ==0){
            DFS(G,v,n);
        }
    }

}

int main()
{
    int G[7][7] = {{0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 0, 0, 0},
                   {0, 1, 0, 0, 1, 0, 0},
                   {0, 1, 0, 0, 1, 0, 0},
                   {0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 1, 0, 0}};
 
    printf("\n");
    DFS(G,3,7);
    return 0;
}