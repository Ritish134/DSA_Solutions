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
    TreeNode* invertTree(TreeNode* root) {
      // Base case
        if(root==NULL)
            return NULL ;
        // Recursive call for left and right subtree
        invertTree(root->left);
        invertTree(root->right);
        // Swap the nodes
        swap(root->left,root->right);
        return root;
    }
};
