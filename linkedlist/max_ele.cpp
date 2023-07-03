#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
}*first=NULL;


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

// int max(struct Node *p){
//     int max=INT16_MIN;
//     while(p){
//         if(p->data >max){
//             max=p->data;
//             p=p->next;
//         }
//     }   
//     return max;
// }
int Max(struct Node *p){
 int max=INT32_MIN;

 while(p)
 {
 if(p->data>max)
 max=p->data;
 p=p->next;
 }
 return max;

}


int main()
{
    int A[] = {8,3,7,12,9};
    Create(A,5);
    printf("max element is %d ", Max(first));

}