bool check(vector<int> adj[], int vis[], int source)
    {
        vis[source] = 1;
        queue<pair<int, int>> q;
        q.push({source, -1});
        
        while(!q.empty())
        {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            
            for(auto adjacentNode : adj[node])
            {
                if(!vis[adjacentNode]){
                    vis[adjacentNode] = 1;
                    q.push({adjacentNode, node});
                }
                else if(parent != adjacentNode)
                    return true;
            }
            
        }
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        int vis[V] = {0};
        
        for(int i=0; i<V; i++)
        {
            if(!vis[i])
                if(check(adj, vis, i)){ return true;}
        }
        return false;
    }
