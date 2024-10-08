/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*> us;
        ListNode* temp = head;

        while(temp) {
            if(us.find(temp) != us.end()) {
                return temp;
            }
            us.insert(temp);
            temp = temp->next;
        } 
        return NULL;
    }
};