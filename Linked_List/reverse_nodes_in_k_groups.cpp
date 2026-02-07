
//https://leetcode.com/problems/reverse-nodes-in-k-group/submissions/1909962593/
#include<iostream>
using namespace std;

 
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    /*ListNode* recur(ListNode* head, ListNode* head_dummy, int k){
        ListNode* temp = head_dummy;
        int n = k;
        while(n>0 && temp!=NULL){
            n--;
        }
        if(n>0) return head;
        ListNode* next_dummy = temp->next;
        temp->next = NULL;
        ListNode* prev = NULL;
        ListNode* cur = head_dummy;
        ListNode* next = NULL;
        while(cur!=NULL){
            next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        head = prev;
        head_dummy = prev;
        while(head_dummy != NULL){
            head_dummy = head_dummy->next;
        }
        head_dummy->next = next_dummy;
        return recur(head,head_dummy->next,k);
    }*/
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *curr = head;
        int count = 0;
        while(curr!=NULL && count<k){
            curr = curr->next;
            count++;
        }

        if(count == k){
            ListNode* prevNode = NULL;
            ListNode* currNode = head;
            ListNode* nextNode = NULL;
            int count2 = 0;
            while(currNode!=NULL && count2<k){
                nextNode = currNode->next;
                currNode->next = prevNode;
                prevNode = currNode;
                currNode = nextNode;
                count2++;
            }

            head->next = reverseKGroup(curr,k);
            return prevNode;
        }

        return head;
    }
};