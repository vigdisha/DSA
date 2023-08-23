//given the head return where the 
//cycle starts

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int length(ListNode *head){
     ListNode fast  = head;
        ListNode slow = head;
        while(fast != NULL &&fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                // return 1;
            
            ListNode *temp = slow;
            int length = 0;
            //we need it to run atleast once
            do{
                length ++;
            }while(temp !=slow);
            return length;
            }
            return 0;
        }
    }

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        int l=0;
         ListNode fast  = head;
        ListNode slow = head;
        while(fast != NULL &&fast->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
            if(fast == slow){
                l=length(slow);
                break;
            }
    }
    if (l==0){
        return NULL;
    }
    //find the start
    ListNode *f = head;
    ListNode *sec = head;
    while(l > 0){
        sec= sec->next;
        l--;

    }
    //keep moving
    //will meet at start
    while(f!=sec){
        f = f->next;
        sec = sec->next;
    }
    return sec;
    }
}