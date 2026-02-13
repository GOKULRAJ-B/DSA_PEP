
//https://www.geeksforgeeks.org/problems/the-celebrity-problem/1


#include<iostream>
#include<string>
#include<stack>
using namespace std;

class Solution {
  public:
    int celebrity(vector<vector<int>>& mat) {
        // code here
        int n = mat.size();
        stack<int> st;
        
        for(int i=0; i<n; i++){
            st.push(i);
        }
        
        while(st.size() > 1){
            int A = st.top();
            st.pop();
            
            int B = st.top();
            st.pop();
            
            if(mat[A][B] == 1) st.push(B);
            else st.push(A);
        }
        int potentialCandidate = st.top();
        
        for(int i=0; i<n; i++){
            if(i==potentialCandidate) continue;
            if(mat[potentialCandidate][i] == 1) return -1;
            if(mat[i][potentialCandidate] == 0) return -1;
        }
        return potentialCandidate;
    }
};