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

 int Delete(struct Node *p, int index){
  struct Node *q;
  int x=-1;
  
  //if empty ll the return

  if(index <1 || index > count(p)){
    return -1;
  }
  if(index==1){
    q=first;
    //store data of first in x
    x=first->data;
    //appoint first as the next node
    first = first->next;
    free(q);
    return x;
  }
  else{
    for(int i=0; i<index-1; i++){
     q=p;
     p=p->next;
     q->next= p->next;
     x=p->data;
    free(p);
    }
  }


}
 int main(){
    int A [] = {10,20,40,30,50};
    Create(A, 5);

    Delete(first,3);

    display(first);
 }