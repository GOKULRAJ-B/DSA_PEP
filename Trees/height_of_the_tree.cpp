//https://www.geeksforgeeks.org/problems/height-of-binary-tree/1

#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


class Solution {
  public:
    int height(Node* root) {
        // code here
        if(root==NULL) return -1;
        
        return max(height(root->left),height(root->right))+1;
    }
};