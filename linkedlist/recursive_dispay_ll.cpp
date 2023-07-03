#include<iostream>
using namespace std;


struct Node{
    int data;
    struct Node *next;

}*first=NULL;

void Create(int A[], int n){
    int i;
    struct Node *t, *last;
    first  = (struct Node *)malloc(sizeof(struct Node));
   
   first ->data = A[0];
   last ->next=NULL;
   last = first;

   for(i=1; i<n ; i++){
   
   t = (struct Node *)malloc(sizeof(struct Node));
   //(1)node : data|empty-> t now (2)
   t->data=A[i];
   t->next=NULL;
   last->next=t;
   //(2)new node should now be t ie (data|next link)
   last=t;
   }

}

void display(struct Node *p){
    if(p!=NULL){
        // printf("%d ", p->data);
        display(p->next);
        printf("%d ", p->data);
    }
}

int main(){
    int A[]  = {1,45,6,7,7,8};
Create(A,6 );
display(first);
}