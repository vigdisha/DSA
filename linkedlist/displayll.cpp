#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;

}*first=NULL;
void Create(int A[], int n){
    int i;
    //create temporary pointer t:
    struct Node *t, *last;
    //memory allocation:
    first = (struct Node *)malloc(sizeof(struct Node));

    first ->data=A[0];
    last ->next=NULL;
    last = first;

//while iterating via this loop the cration of l.list occurs 
    for(i=1; i<n;i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data =A[i];
        t->next = NULL;
        last->next=t;//putting address of current node in next of  node
        last=t;//assigning current node as last node
    }
}

void display(struct Node *p)
{
 while(p!=NULL){
    printf("%d ", p->data);
    p=p->next;
 };
};



int main(){
    int A[]={3,4,6,7,4};

Create(A, 5);
display(first);
}