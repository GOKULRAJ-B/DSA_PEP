


//https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/
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
    map<int,map<int,multiset<int>>> mpp;
    void verti(TreeNode* root,int count,int row){
        if(root==NULL) return;
        //mpp[count].push_back(root->val);
        //mpp.insert({count,root->val}); 
        mpp[count][row].insert(root->val);
        if(root->left){
            verti(root->left,count-1,row+1);
        }
        if(root->right){
            verti(root->right,count+1,row+1);
        }
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {

        int count = 0;
        int row = 0;
        vector<vector<int>> result;
        if(root==NULL) return result;
        verti(root,count,row);
        for(auto i : mpp){
            vector<int>ele;
            for(auto j : i.second){
                for(auto k : j.second){
                    ele.push_back(k);
                }
            }
            result.push_back(ele);
        }
        return result;
    }
};