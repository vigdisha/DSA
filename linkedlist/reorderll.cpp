// You are given the head of a singly linked-list. The list can be represented as:

// L0 → L1 → … → Ln - 1 → Ln
// Reorder the list to be on the following form:

// L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
// You may not modify the values in the list's nodes. Only nodes themselves may be changed.

// Example 1:

// Input: head = [1,2,3,4]
// Output: [1,4,2,3]

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
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    void reverse()
    {
        if (size < 2)
        {
            return;
        }
        Node *prev = nullptr;
        Node *pres = head;
        Node *next = pres->next;

        while (pres != nullptr)
        {
            pres->next = prev;
            prev = pres;
            present = next;

            if (next != nullptr)
            {
                next = next->next;
            }
        }
        return prev;
    }
    void reorderList(ListNode *head)
    {
        if (head == nullptr && head->next == nullptr)
        {
            return;
        }
        ListNode *mid = middleNode(head);
        ListNode hs = reverse(mid);
        ListNode hf = head;

        // rearrange
        while (hf != nullptr && hs != nullptr)
            ListNode *temp = hf->next;
        hf->next = hs;
        hf = temp;

        temp = hs->next;
        hs->next = hf;
        hs = temp;

        // next of tail as null
        if (hf != nullptr)
        {
            hf->next = nullptr;
        }
    }
};