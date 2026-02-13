

//https://leetcode.com/problems/asteroid-collision/
#include<iostream>
#include<string>
#include<stack>
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        // int n = asteroids.size();
        // int i = 0;
        // stack<int>st;
        // while(i<n){
        //     if(st.empty()){
        //         st.push(asteroids[i]);
        //         i++;
        //     }
        //     else if((st.top()>=0 && asteroids[i]>=0) || (st.top()<0 && asteroids[i]<0)){
        //         st.push(asteroids[i]);
        //         i++;
        //     }
        //     else{
        //         if( abs(st.top())==abs(asteroids[i]) ){
        //             i++;
        //             st.pop();
        //         }
        //         else if(abs(st.top()) < abs(asteroids[i])){
        //             st.pop();
        //         }
        //         else{
        //             i++;
        //         }
        //     }
        // }
        // stack<int>st1;
        // while(!st.empty()){
        //     st1.push(st.top());
        //     st.pop();
        // }
        // vector<int>vec;
        // while(!st1.empty()){
        //     vec.push_back(st1.top());
        //     st1.pop();
        // }
        // return vec;

        stack<int> st;
        for(int curr : asteroids){
            bool destroyed = false;
        while(!st.empty() && st.top()>0 && curr<0){
            
            int topVal = st.top();

            if(abs(topVal)<abs(curr)){
                st.pop();
                continue;
            }
            else if(abs(topVal) > abs(curr)){
                destroyed = true;
            }
            else{
                st.pop();
                destroyed = true;
            }
            break;

        }
        if(!destroyed) st.push(curr);
        }
        vector<int>result(st.size());
        for(int i = st.size()-1; i>=0; i--){
            result[i] = st.top();
            st.pop();
        }
        return result;

    }
};