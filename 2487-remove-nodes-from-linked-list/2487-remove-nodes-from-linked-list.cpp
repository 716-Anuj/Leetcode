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

    ListNode* convert2Arr(vector<int> ans) {
        if(ans.empty()) return nullptr;
        ListNode* head1 = new ListNode(ans[0]);
        ListNode* mover = head1;

        for(int i = 1; i < ans.size(); i++) {
            ListNode* current = new ListNode(ans[i]);
            mover->next = current;
            mover = current;
        }
        return head1;
    }

    ListNode* removeNodes(ListNode* head) {

        if(!head) return nullptr;

        ListNode* temp = head;
        vector<int> arr;
        vector<int> ans;

        while(temp != NULL) {
            arr.push_back(temp->val);
            temp = temp->next;
        }

        ans.push_back(arr[arr.size()-1]);
        int last = arr[arr.size()-1];

        for(int i = arr.size()-2; i >= 0; i--) {
            if(arr[i] >= last) {
                ans.push_back(arr[i]);
                last = arr[i];
            }
        }

        reverse(ans.begin(), ans.end());

        ListNode* result = convert2Arr(ans);
        return result;
    }
};