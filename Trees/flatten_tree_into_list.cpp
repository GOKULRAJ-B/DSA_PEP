


//https://www.geeksforgeeks.org/problems/flatten-bst-to-sorted-list--111950/1
/*
class Node{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    
    Node* pre = NULL;
    Node* head = NULL;
    void inorder(Node* node){
        if(node==NULL) return;
        inorder(node->left);
        if(pre==NULL){
            head = node;
        } 
        else{
            pre->right = node;
        }
        node->left = NULL;
        pre = node;
        inorder(node->right);
    }
    Node *flattenBST(Node *root) {
            // code here
            inorder(root);
            return head;
            
        }
};