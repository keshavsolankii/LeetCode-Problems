void dfs(vector<int>& ans, int node, int vis[], vector<int> adj[]){
        vis[node] = 1;
        ans.push_back(node);
        
        for(auto it : adj[node])
        {
            if(!vis[it])
                dfs(ans, it, vis, adj);
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        int visited[V] = {0};
        int start = 0;
        
        dfs(ans, start, visited, adj);
        
        return ans;
    }
