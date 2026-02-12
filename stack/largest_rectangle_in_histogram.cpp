//https://leetcode.com/problems/largest-rectangle-in-histogram/

#include<iostream>
#include<string>
#include<stack>
#include<vector>
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int>st;
        vector<int>left(n);
        vector<int>right(n);
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]){
                st.pop();
            }
            if(st.empty()){
                left[i] = -1;
            }
            else{
                left[i] = st.top();
            }
            st.push(i);
        }
        while(!st.empty()) st.pop();

        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            if(st.empty()){
                right[i] = n;
            }
            else{
                right[i] = st.top();
            }
            st.push(i);
        }
        int m;
        for(int i=0;i<n;i++){
            int height = heights[i];
            int width = right[i]-left[i]-1;
            int a = height * width;
            m = max(m,a);
        }
        
        return m;
    }
};