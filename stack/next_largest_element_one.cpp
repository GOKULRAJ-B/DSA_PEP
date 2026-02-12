
//https://leetcode.com/problems/next-greater-element-i/
#include<iostream>
#include<string>
#include<stack>
#include<vector>
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        int n2 = nums2.size();
        int n1 = nums1.size();
        vector<int> nge1(n1);
        vector<int> nge2(n2);
        for(int i=n2-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            }
            if(st.empty()){
                nge2[i] = -1;
            }
            else{
                nge2[i] = st.top();
            }
            st.push(nums2[i]);
        }
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(nums1[i]==nums2[j]){
                    nge1[i]=nge2[j];
                }
            }
        }
        return nge1;
    }
};