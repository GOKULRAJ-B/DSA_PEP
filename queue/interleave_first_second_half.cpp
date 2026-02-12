//https://www.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1
#include<iostream>
#include<string>
#include<stack>
#include<queue>
class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        // code here
        stack<int>st;
        int halfSize = q.size()/2;
        //q: 16 17 18 19 20        st: 15 14 13 12 11 
        for(int i=0;i<halfSize;i++){
            st.push(q.front());
            q.pop();
        }
        //q: 16 17 18 19 20 15 14 13 12 11
        while(!st.empty()){
            q.push(st.top());
            st.pop();
        }
        //q: 15 14 13 12 11 16 17 18 19 20
        for(int i=0;i<halfSize;i++){
            q.push(q.front());
            q.pop();
        }
        
        
        //q: 16 17 18 19 20  st: 11 12 13 14 15
        
        for(int i=0;i<halfSize; i++){
            st.push(q.front());
            q.pop();
        }
        
        //q: 11 16 12 17 13 18 14 19 15 20
        while(!st.empty()){
            q.push(st.top());
            st.pop();
            q.push(q.front());
            q.pop();
        }
    }
};