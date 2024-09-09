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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* temp = head;

        if(head == NULL || head->next == NULL) {
            return NULL;
        }

        while(temp) {
            temp = temp->next;
            size++;
        }

        temp = head;

        if(size == n) {
            temp = temp->next;
            return temp;
        }

        size = size - n;
        temp = head;

        for(int i = 1; i < size; i++) {
            temp = temp->next;
        }
        ListNode* curr = temp->next;
        temp->next = temp->next->next;
        delete(curr);

        return head;
    }
};