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
     ListNode* reverseList(ListNode* head) {
  if (head == nullptr) {
            return nullptr; 
        }
        ListNode *prev = nullptr;
        ListNode *pres =head;
        ListNode *prog = pres->next;

        while(pres != nullptr){
            pres->next = prev;
            prev = pres;
            pres = prog;

            if(prog != nullptr){
                prog = prog->next;
            }
        
    return  prev;
    }

     bool isPalindrome(ListNode* head) {
        ListNode *mid = middleNode();
        ListNode *secondhead = reverseList(mid);
        ListNode *rereverse = secondhead;

        while(head != nullptr && secondhead != nullptr){
            if(head->val != secondhead->val){
                break;
            }
            head = head->next;
            secondhead = secondhead->next;
        }

        if(head == nullptr && secondhead == nullptr){
            return true;
        }else{
            return false;
        }


        reverseList(rereverse) ;
    }
};
}