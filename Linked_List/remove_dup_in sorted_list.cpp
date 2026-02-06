//https://leetcode.com/problems/remove-duplicates-from-sorted-list/



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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* prev = head;
        ListNode* cur = head->next;
        while(cur!=NULL){
            if(prev->val == cur->val){
                prev->next = cur->next;
                ListNode* toDel = cur;
                cur = cur->next;
                delete toDel;
            }
            else{
                prev = prev->next;
                cur = cur->next;
            }
        }
        return head;
    }
};