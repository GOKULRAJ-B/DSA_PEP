
//https://www.geeksforgeeks.org/problems/insert-in-a-sorted-list/1

#include<iostream>
using namespace std;
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};


class Solution {
  public:
    // Should return head of the modified linked list
    Node* sortedInsert(Node* head, int key) {
        // Code here
        Node* newnode = new Node(key);
        if(head->data > newnode->data){
            newnode->next = head;
            head = newnode;
            return head;
        }
        Node* temp = head;
        while(temp->next!=NULL){
            if(temp->next->data > newnode->data){
                break;
            }
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
        return head;
    }
};