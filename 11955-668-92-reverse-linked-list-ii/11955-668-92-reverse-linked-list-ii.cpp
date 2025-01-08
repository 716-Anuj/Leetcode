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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* temp = head;
        ListNode* newtemp = NULL;
        ListNode* r = head;

        left = left - 1;
        right = right - 1;

        for (int i = 0; i < left; i++) {
            newtemp = temp;
            temp = temp->next;
        }

        for (int i = 0; i <= right; i++) {
            r = r->next;
        }

        ListNode* temp1 = temp;
        ListNode* curr = temp;
        ListNode* prev = NULL;

        for (int i = left; i <= right; i++) {
            temp1 = temp1->next;
            curr->next = prev;
            prev = curr;
            curr = temp1;
        }

        if (newtemp != NULL) {
            newtemp->next = prev;
        } else {
            head = prev;
        }

        temp->next = r;
        return head;
    }
};