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

   bool symmetric(TreeNode* left1, TreeNode* right1) {
        if(left1 == nullptr && right1 == nullptr) {
            return true;
        }
        if(left1 == nullptr || right1 == nullptr) {
            return false;
        }
        if(left1->val != right1->val) {
            return false;
        }

        bool left2 = symmetric(left1->left, right1->right);
        bool right2 = symmetric(left1->right, right1->left);

        if(left2 == true && right2 == true) {
            return true;
        } 
        return false;
   }

    bool isSymmetric(TreeNode* root) {
        if(root == NULL) {
            return true;
        }
        return symmetric(root->left, root->right);
    }
};