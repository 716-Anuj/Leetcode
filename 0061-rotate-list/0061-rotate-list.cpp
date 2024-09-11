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
        int size = 0;
        ListNode* temp = head;

        if(head == NULL || head->next == NULL) return head; 

        while(temp) {
            temp = temp->next;
            size++;
        }

        k = k % size;
        if(k == 0) return head;
        temp = head;

        for(int i = 1; i < size-k; i++) {
            temp = temp->next;
        }

        ListNode* newHead = temp->next;
        temp->next = NULL;
        
        temp = newHead;

        while(temp->next) {
            temp = temp->next;
        }
        temp->next = head;
        return newHead;

    }
};