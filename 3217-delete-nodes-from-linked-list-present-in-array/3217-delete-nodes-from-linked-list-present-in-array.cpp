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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>mp(nums.begin(), nums.end());

        ListNode* ptr = head;
        ListNode* prev = NULL;

        while(ptr != NULL) {
            if(mp.find(ptr->val) != mp.end()) {

                if(head == ptr) {
                    head = ptr->next;
                    delete ptr;
                    ptr = head;
                }
                else {
                    prev->next = ptr->next;
                    delete ptr;
                    ptr = prev->next;
                }
            }
            else {
                prev = ptr;
                ptr = ptr->next;
            }
        }
        return head;
    }
};