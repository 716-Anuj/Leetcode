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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        if(head == NULL || head->next == NULL) return head;

        while(temp->next) {
            int gcd_val = __gcd(temp->val, temp->next->val);
            ListNode* newNode = new ListNode(gcd_val);
            newNode->next = temp->next;
            temp->next = newNode;
            temp = temp->next->next;
        }
        return head;
    }
};