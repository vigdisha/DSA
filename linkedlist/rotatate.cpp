// Given the head of a linked list, rotate the list to the right by k places.
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
    ListNode* rotateRight(ListNode* head, int k) {
      if(k<0 || head==nullptr \\ head->next ==nullptr){
        return;
      }  

      ListNode *last = head;
      int length =l;
      while(last->next != nullptr)
      {
        //we reach the tail of ll
        last = last->next;
        length++;
      }

      last->next = head;
       int roatations = k % l;
       int skip = l-k;
        Listnode *newlast = head;
       for(i=0; i<skip-1;i++)
       {
        newlast = newlast ->next;
       }

       head = newlast->next;
       newlast->next = nullptr;

return  head;










    }
};