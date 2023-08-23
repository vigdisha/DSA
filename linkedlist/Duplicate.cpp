#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *next;
}*first=NULL;

int count(struct Node *p){
    int C=0;
    if(p != 0){
        C++;
        p=p->next;
    }
    return C;

}
void display(struct Node *p)
{
 while(p!=NULL){
       cout << p->data << " ";
    p=p->next;
 };
};


void Create(int A[], int n){
    int i;
    struct Node *t, *last;

    first = new Node;
    first ->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1 ; i<n; i++){
        t=new Node;
                t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
 }


 void duplicates(struct Node *p){
    struct Node *q=p->next;
    while(q!=NULL){
        if(p->data != q->data){
         p=q;
         q=q->next;
        }
        else{
            p->next=q->next;
            delete q;
            q=p->next;
        }
    }

 }
 int main()
{
 
 int A[]={10,20,20,40,50,50,50,60};
 Create(A,8);
 
 duplicates(first); 
 display(first); 
 
 return 0; }