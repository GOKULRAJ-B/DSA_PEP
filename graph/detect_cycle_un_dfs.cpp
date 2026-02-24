
//https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

class Solution {
  public:
  
  
    bool dfs(int node,vector<vector<int>>&adj,vector<bool>&visited, unordered_map<int,int>parent){
        visited[node] = true;
        
        for(int i:adj[node]){
            if(!visited[i]){
                parent[i] = node;
                if(dfs(i,adj,visited,parent)) return true;
                
            }
            else if(parent[node] != i) return true;
            
        }
        return false;
    }
  
  
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);
        for(auto &i : edges){
            int u = i[0];
            int v = i[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> visited(V,false);
        for(int i=0;i<V;i++){
            if(!visited[i]){
                unordered_map<int,int>parent;
                parent[i]=-1;
                if(dfs(i,adj,visited,parent))  return true;
            }
            
        }
        return false;
    }
};