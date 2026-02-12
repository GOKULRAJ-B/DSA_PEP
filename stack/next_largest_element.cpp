
//https://www.geeksforgeeks.org/problems/next-larger-element-1587115620/1
#include<iostream>
#include<string>
#include<stack>
class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        stack<int> st;
        vector<int> nge(n);
        for(int i = n-1;i>=0;i--){
            while(!st.empty() && st.top()<=arr[i]){
                st.pop();
            }
            if(st.empty()){
                nge[i] = -1;
            }
            else{
                nge[i] = st.top();
            }
            st.push(arr[i]);
        }
        return nge;
    }
};