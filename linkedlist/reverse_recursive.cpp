#include <iostream>
using namespace std;

/* Link list node */
struct Node
{
	int data;
	struct Node *next;
	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};

struct LinkedList
{
	Node *head;
	LinkedList()
	{
		head = NULL;
	}

	/* Function to reverse the linked list */
	Node *reverse(Node *node)
	{
		if (node == NULL)
			return NULL;
		// if node ==tail
		if (node->next == NULL)
		{
			// head becomes tail
			head = node;
			return node;
		}
		//we reverse the linked list 
		//as the tail becomes the head
		Node *node1 = reverse(node->next);
		// moving out of recursion call
		//node now points at current 
		node1->next = node;
		node->next = NULL;
		return node;
	}

	/* Function to print linked list */
	void print()
	{
		struct Node *temp = head;
		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
	}

	void push(int data)
	{
		Node *temp = new Node(data);
		temp->next = head;
		head = temp;
	}
};

int main()
{
	/* Start with the empty list */
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
