

//https://leetcode.com/problems/n-ary-tree-level-order-traversal/description/?envType=problem-list-v2&envId=tree

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> result;
        if(!root) return result;
        //result.push_back({root->val});
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int>level_elements;
            for(int i=0; i<size; i++){
                Node* frontNode = q.front();
                q.pop();
                level_elements.push_back(frontNode->val);
                for(auto j : frontNode->children){
                    //level_elements.push_back(j->val);
                    q.push(j);
                }
            }
            result.push_back(level_elements);
        }
        return result;
    }
};