
// Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

// k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

// You may not alter the values in the list's nodes, only nodes themselves may be changed.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(K<=1 || head == nullptr){
            return;
        }
//skip i-1 ele
     ListNode *current = head;
        ListNode *prev = nullptr;
while(true){
ListNode *last= prev;
ListNode *newend = current;

//reverse b/w land r
 ListNode *next = current->next;
for(int i=0; current != nullptr && i<k;i++){
prev= current->next;
prev = current;
if(next != nullptr){
next = next->next;

}
}
if(last != nullptr){
    last->next =prev;}
    else{
    head = prev
}

newend ->next = current;
}//while loop ends
return head;


if(current == nullptr){
    break;
}
prev = newend;


    }
};
