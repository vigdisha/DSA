//stack using linkedlist
#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node * next;
}*top=NULL;
//top decalred as a global variable

void push(int x){
    struct Node *t =new Node;
    t = (struct Node *)malloc(sizeof(struct Node));

    if(t==NULL){
        cout<<"stack overflow";
    }
    else{
        t->data = x;
        t->next  = top;
        top=t;
    }
}

int pop(){
    int x =-1;
    struct Node *t;
    if(top==NULL){
        cout<<"stack underflow";

    }
    else{
        t=top;
        top=top->next;
        t->data=x;
        free(t);
    }
    return x;

}

void Display(){
    struct Node *p;
    p=top;
    while(p!=NULL){
        printf("%d ", p->data);
        p=p->next;
    }
    
}

int main(){
push(6);
push(3);
push(10);
Display();

// printf("%d", pop());

}