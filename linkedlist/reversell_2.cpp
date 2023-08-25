                                                       //LEETCODE _medium//
// Given the head of a singly linked list
//  and two integers left and right where left <= right, reverse the nodes of the list from position left to position right,
//  and return the reversed list.


//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right){
            return head;
        }
        ListNode *current = head;
        ListNode *prev = nullptr;
//skip i-1 ele
        for(int i=0; current !=NULL && i<left-1;i++)
{
        prev = current ;
        current = current->next;

}   

ListNode *last= prev;
ListNode *newend = current;

//reverse b/w land r
 ListNode *next = current->next;
for(int i=0; current != nullptr && i<(right -left +1;i++)){
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
return head;
}
}; 