/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    bool check(TreeNode* l, TreeNode* r){
        if(r == NULL && l == NULL){
            return true;
        }
        if(r == NULL || l == NULL){
            return false;
        }
        if(r->val != l->val){
            return false;
        }
        bool res1 = check(l->left, r->right);
        bool res2 = check(r->left, l->right);

        if(res1 == true && res2 == true){
            return true;
        }else{
            return false;
        }
    }

    bool isSymmetric(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        bool result = check(root->left, root->right);
        return result;
    }
};