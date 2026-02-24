
//https://leetcode.com/problems/convert-bst-to-greater-tree/?envType=problem-list-v2&envId=binary-search-tree

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
int sum = 0;
    void traSum(TreeNode* root){
        if(root==NULL) return;
        traSum(root->right);
        root->val = sum + root->val;
        sum = root->val;
        traSum(root->left);
    }
    TreeNode* convertBST(TreeNode* root) {
        if(root==NULL) return root;
        int sum = 0;
        traSum(root);
        return root;
    }
};