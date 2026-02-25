


//https://www.geeksforgeeks.org/problems/topological-sort/1

class Solution {
  public:
  
  
    void dfs(int node, vector<vector<int>> &adj,vector<bool>&visited, stack<int>&st){
        
        visited[node] = true;
        for(auto i : adj[node]){
            if(!visited[i]){
                dfs(i,adj,visited,st);
            }
        }
        st.push(node);
    }
    
    
    
    
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        for(auto &i : edges){
            int u = i[0];
            int v = i[1];
            adj[u].push_back(v);
        }
        
        vector<bool> visited(V,false);
        stack<int>k;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(i,adj,visited,k);
            }
        }
        vector<int>result;
        while(!k.empty()){
            result.push_back(k.top());
            k.pop();
        }
        return result;
    }
};
