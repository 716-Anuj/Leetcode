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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> ans(k);
        int size = 0;

        ListNode* temp = head;

        while(temp) {
            temp = temp->next;
            size++;
        }

        int rem = size/k;
        int modulo = size%k;

        temp = head;

        for(int i = 0; i < k; i++) {
            if(temp == NULL) break;
            ans[i] = temp;

            int currentSize = rem + ((modulo > 0) ? 1 : 0);

            for(int p = 1; p < currentSize; p++) {
                temp = temp->next;
            }

            if(modulo != 0) {
                modulo--;
            }

            if(temp != NULL){
                ListNode* temp1 = temp->next;
                temp->next = nullptr;
                temp = temp1;
            }
            
        }
        return ans;
    }
};