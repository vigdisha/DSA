#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node *next;
}*first;

void Create(int A[], int n) {
    int i;
    struct Node *t, *last;

    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first; 

    for (i = 1; i < n; i++) {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t; 
    }
}

int Count(struct Node *p) {
    int C = 0;
    while (p != NULL) {
        C++;
        p = p->next;
    }
    return C;
}

int main() {
    int A[] = {3, 4, 5, 6, 6, 7, 8};
    Create(A, 7);
    cout << "count of linked list " << Count(first) << endl;
}