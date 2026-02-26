
//https://www.geeksforgeeks.org/problems/prerequisite-tasks/1

class Solution {
  public:
  
    bool dfs(int node, vector<vector<int>>&adj, vector<int>&visited, vector<int>&rec){
        visited[node] = 1;
        rec[node] = 1;
        for(auto&i : adj[node]){
            if(!visited[i]){
                if(dfs(i,adj,visited,rec)){
                    return true;
                }
            }
            else if(rec[i]){
                return true;
            }
        }
        rec[node] = 0;
        return false;
    }
    
    bool isPossible(int N, int P, vector<pair<int, int> >& prerequisites) {
        // Code here
        vector<vector<int>>adj(N);
        for(auto &i : prerequisites){
            adj[i.first].push_back(i.second);
        }
        
        vector<int> visited(N,0);
        vector<int> rec(N,0);
        for(int i=0;i<N;i++){
            if(!visited[i]){
                if(dfs(i,adj,visited,rec)) return false;
            }
        }
        return true;
    }
};