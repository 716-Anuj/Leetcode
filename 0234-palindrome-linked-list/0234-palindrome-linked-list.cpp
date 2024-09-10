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
    bool isPalindrome(ListNode* head) {
        int size = 0; 
        ListNode* temp  = head;

        while(temp) {
            temp = temp->next;
            size++;
        }

        if(size == 1) return true;

        temp = head;

        if(size % 2 == 0)
        for(int i = 1; i < size/2; i++) {
            temp = temp->next;
        }

        if(size%2 != 0) {
            for(int i = 1; i < size/2; i++) {
                temp = temp->next;
            }
            temp->next = temp->next->next;
        }

        ListNode* curr = temp->next;
        temp->next = NULL;
        ListNode* prev = NULL;

        while(curr) {
            ListNode* temp1 = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp1;
        }

        while(prev && head) {
            if(prev->val != head->val) return false;
            prev = prev->next;
            head = head->next;
        }
        return true;
    }
};