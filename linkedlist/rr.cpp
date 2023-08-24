#include<iostream>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

struct LinkedList 
{
    Node* head;
    LinkedList(){
        head= NULL;
    }

    Node* reverse(Node* node)
    {
        if(node == NULL){
            return NULL;
        }
        if(node->next == NULL){
            head = node;
            return node;
        }
        Node* node1 = reverse(node->next);
        node1->next = node;
        return node;
    }

    void print()
    {
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void push(int data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};

int main(){
    LinkedList ll;
    ll.push(20);
    ll.push(4);
    ll.push(15);
    ll.push(85);
 
    cout << "Given linked list\n";
    ll.print();
 
    ll.reverse(ll.head);
 
    cout << "\nReversed Linked list \n";
    ll.print();
    return 0;
}
