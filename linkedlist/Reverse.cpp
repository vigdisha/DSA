#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

int count(struct Node *p)
{
    int C = 0;
    if (p != 0)
    {
        C++;
        p = p->next;
    }
    return C;
}
void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    };
};

void Create(int A[], int n)
{
    int i;
    struct Node *t, *last;

    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Reverse1(struct Node *p)
{
    // create an array dynamically using pointer whose size will be eqaul to the linkedlist
    int *A, i = 0;
    struct Node *q = p;
    A = (int *)malloc(sizeof(int) * count(p));

    while (q != NULL)
    {
        A[i] = q->data;
        q = q->next;
        i++;
    }
    q = p;
    i--;
    while (q != NULL)
    {
        q->data = A[i];
        q = q->next;
        i--;
    }
}

// using slider pointer
void Reverse2(struct Node *p)
{
    struct Node *q = NULL, *r = NULL;

    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

// using recursion
void Reverse3(struct Node *q, struct Node *p)
{

    if (p)
    {
        Reverse3(p, p->next);
        p->next = q;
    }
    else
    {
        first = q;
    }
}

int main()
{
    int A[] = {10, 20, 30, 40};
    Create(A, 4);
    //  Reverse1(first);
    // Reverse2(first);
    Reverse3(NULL, first);
    display(first);
    return 0;
}