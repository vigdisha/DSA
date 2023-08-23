// int middle(Node *head)
// {
//     Node* current = head;
//     int len = 0;
//     while(head != 0){
//         len ++;
//         current = current->next;
//     }

//         int pos = len/2;
//         current = head;
//         //trversal to the middle pos
//   for(int i=0; i<pos;i++){
//         current =current->next;
//     }
//     return current ->data;}

//For ONE PASS
                  //LEETCODE//
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
    ListNode* middleNode(ListNode* head) {
     ListNode *slow = head;
     ListNode *fast = head;
     while(fast != NULL &&fast->next != NULL){
        slow =slow->next;
        fast = fast->next->next;
     }
     return slow;

    }
};



