#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*front=NULL,*rear=NULL;

void enqueue(int x){
    struct Node *t;
    t=(struct Node *)malloc(sizeof(struct Node));
    if(t==NULL){
      printf("queue is full");
    }
    else{
        t->data=x;
        t->next = NULL;
        //check if node to be inserted is first node
        if(front=NULL){
            front=rear=t;
        }
        else{
            rear ->next =t;
            rear=t;
        }
    }
}

int dequeue(){
    int x=-1;
    Node *p;
    if(front==NULL){
        printf("queue is empty");
    }
    else{
        p=front;
        front=front->next;
        x=p->data;
        free(p);
    }
    return x;
}

void display(){
    struct Node *p;
    while(p){
        cout<<p->data;
        p=p->next;
    }
}

int main(){

    enqueue(10);
     enqueue(50);
      enqueue(76);
       enqueue(67);
        enqueue(1);

    display();

}