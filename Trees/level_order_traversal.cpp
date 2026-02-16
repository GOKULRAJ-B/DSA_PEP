//https://leetcode.com/problems/binary-tree-level-order-traversal/

#include<iostream>
using namespace std;
  struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        // vector<vector<int>> result;
        // int i=0;
        // queue<TreeNode*>q;
        // q.push(root);
        // q.push(NULL);
        // while(!q.empty()){
        //     if(q.front()->left!=NULL){
        //         q.push(q.front()->left);
        //     }
        //     if(q.front()->right!=NULL){
        //         q.push(q.front()->right);
        //     }

        //     int j=0;
        //     q.push(NULL);
        //     while(q.front()!=NULL){
        //         result[i][j++] = q.front()->val;
        //         q.pop();
        //     }
        //     q.pop();
        //     if(q.front()==NULL) break;
        // }
        // return result;

        vector<vector<int>>result;
        if(root==NULL) return result;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int> levelElements;
            int levelSize = q.size();
            for(int i=0;i<levelSize;i++){
                TreeNode* frontNode = q.front();
                q.pop();
                levelElements.push_back(frontNode->val);
                if(frontNode->left) q.push(frontNode->left);
                if(frontNode->right) q.push(frontNode->right);
            }
            result.push_back(levelElements);
        }
        return result;
    }
};