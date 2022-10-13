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
    TreeNode* findPos(TreeNode* root, int val) {
        if(root == NULL) return root;
        if(root->val > val) {
            TreeNode* l = findPos(root->left, val);
            if(l == NULL) return root;
            else return l;
        } else {
            TreeNode* r = findPos(root->right, val);
            if(r == NULL) return root;
            else return r;
        }        
    }
    
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* n = new TreeNode(val);
        
        if(root == NULL) {
            return n;
        }
        
        TreeNode* pos = findPos(root, val);
        
        if(pos->val > val) pos->left = n;
        else pos->right = n;
        
        return root;
    }
};
