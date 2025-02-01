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
        int size = 0;
        if(head == NULL || k == 1) return head;
        
        ListNode* temp = new ListNode(0);
        temp->next = head;
        ListNode* curr = head;
        ListNode* prev = temp;

        while(curr != NULL) {
            size++;
            curr = curr->next;
        }

        while(size >= k) {
            curr = prev->next;
            ListNode* front = curr->next;

            for(int i = 1; i < k; i++) {
                curr->next = front->next;
                front->next = prev->next;
                prev->next = front;
                front = curr->next;
            }
            prev = curr;
            size -= k;
        }
        return temp->next;
    }
};