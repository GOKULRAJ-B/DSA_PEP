

//https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int n = adj.size();
        vector<bool> visited(n,false);
        vector<int> result;
        queue<int>q;
        if(adj.empty()) return result;
        q.push(0);
        visited[0] = true;
        while(!q.empty()){
            int size = q.size();
            int front = q.front();
            q.pop();
            result.push_back(front);
            for(auto i : adj[front]){
                if(!visited[i]){
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
        return result;
    }
};