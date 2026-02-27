


//https://www.naukri.com/code360/problems/shortest-path-in-dag_8381897?leftPanelTabValue=SUBMISSION
void dfs(int node,vector<int> &visited,vector<vector<pair<int,int>>> &adj, stack<int> &st){
    visited[node] = 1;
    for(auto &i : adj[node]){
        int nei = i.first;
        if(!visited[nei]){
            dfs(nei,visited,adj,st);
        }
    }
    st.push(node);
}

vector<int> shortestPathInDAG(int n, int m, vector<vector<int>> &edges)
{
    // Write your code here
    vector<vector<pair<int,int>>> adj(n);

    for(int i=0;i<m;i++){
        int u = edges[i][0];
        int v = edges[i][1];
        int w = edges[i][2];

        adj[u].push_back({v,w});

    }

    vector<int>visited(n,0);
    stack<int>st;

    for(int i=0;i<n;i++){
        if(!visited[i]){ 
            dfs(i,visited,adj,st);
        }
    }


    vector<int>dist(n,INT_MAX);
    dist[0] = 0;

    while(!st.empty()){
        int node = st.top();
        st.pop();
        if(dist[node] != INT_MAX){
        for(auto &edge : adj[node]){
            int nei = edge.first;
            int weight = edge.second;

            if(dist[node] + weight < dist[nei])
            {
                dist[nei] = dist[node] + weight;
            }
        }
        }
    }
        for(int i=0;i<n;i++){
            if(dist[i] == INT_MAX){
                dist[i] = -1;
            }
        }
    return dist;
}
