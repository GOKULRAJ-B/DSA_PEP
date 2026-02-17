

//https://leetcode.com/problems/binary-tree-right-side-view/




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

    // void traverseRight(TreeNode* root,vector<int> &ans){
    //     if(root==NULL) return;
    //     ans.push_back(root->val);
    //     if(root->right) traverseRight(root->right,ans);
    //     else traverseRight(root->left,ans);
    // }
    // int height(TreeNode* root){
    //     if(root==NULL) return -1;
    //     return max(height(root->left),height(root->right))+1;
    // }

    // void traverseLeft(TreeNode* root, vector<int> &ans1){
    //     if(root==NULL) return;
    //     ans1.push_back(root->val);
    //     if(root->right) traverseLeft(root->right,ans1);
    //     else traverseLeft(root->left,ans1);
    // }
    // vector<int> rightSideView(TreeNode* root) {
    //     vector<int>ans;
    //     if(root==NULL) return ans;
    //     ans.push_back(root->val);
    //     int heightRight = height(root->right);
    //     int heightLeft = height(root->left);
    //     traverseRight(root->right,ans);
    //     if(heightRight>=heightLeft) return ans;
    //     vector<int>ans1;
    //     traverseLeft(root->left,ans1);
    //     for(int i=heightLeft-heightRight-1; i<ans1.size(); i++){
    //         ans.push_back(ans1[i]);
    //     }
    //     return ans;

    // }
    vector<int> rightSideView(TreeNode* root){
        vector<int> result;
        if(root==NULL) return result;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int levelSize = q.size();
            int lastValue = 0;
            for(int i=0; i<levelSize; i++){
                TreeNode* frontNode = q.front();
                q.pop();
                lastValue = frontNode->val;
                if(frontNode->left) q.push(frontNode->left);
                if(frontNode->right) q.push(frontNode->right);
            }
            result.push_back(lastValue);
        }
        return result;
    }
};