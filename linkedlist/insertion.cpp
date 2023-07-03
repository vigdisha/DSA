#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first=NULL;

int count(struct Node *p){
    int C;
    if(p != 0){
        C++;
        p=p->next;
    }
    return C;

}
void display(struct Node *p)
{
 while(p!=NULL){
    printf("%d ", p->data);
    p=p->next;
 };
};


void Create(int A[], int n){
    int i;
    struct Node *t, *last;

    first = (struct Node *)malloc(sizeof(struct Node));
    first ->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1 ; i<n; i++){
        t=(struct  Node *)malloc(sizeof(struct Node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
 }

void Insert(struct Node *p,int index, int x){
Node *t,next;
int i;

if(index <0 || index>count(p))
{return;
}

t =(struct Node *)malloc(sizeof(struct Node));
t->data=x;

// insertion at before first node
if(index ==0)
{
    t->next =first;
    first =  t;
}
else
{
    for (i=0; i<index-1; i++){
     p=p->next;
    }
    t->next = p->next;
    p->next = t;

}
}

int main(){
    int A[] = {3,5,7};
    Create(A, 3);
    
    Insert(first, 0, 10);
    display(first);
}