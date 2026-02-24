
//https://leetcode.com/problems/number-of-provinces/?envType=problem-list-v2&envId=graph

class Solution {
public:
    void helper(int node, vector<vector<int>> &isConnected, vector<bool> &visited){
        visited[node] = true;
        for(int i=0;i<isConnected.size();i++){
            if(isConnected[node][i]==1 && !visited[i]) helper(i,isConnected,visited);
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n,false);
        int count=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                helper(i,isConnected,visited);
                count++;
            }
        }
        return count;
    }
};