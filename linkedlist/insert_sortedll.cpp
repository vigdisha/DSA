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

void Insert(struct Node *p,int x)
{
 struct Node *t,*q=NULL;

 t=(struct Node*)malloc(sizeof(struct Node));
 t->data=x;
 t->next=NULL;

 if(first==NULL)
 first=t;
 else
 {
 while(p && p->data<x)
 {
 q=p;
 p=p->next;
 }
 if(p==first)
 {
 t->next=first;
 first=t;
 }
 else
 {
 t->next=q->next;
 q->next=t;
 }
 }

}

int main(){
    int A[] = {10,20,30,40,50};
    Create(A,5);
    Insert(first, 35);
    display(first);
return 0;
    
}