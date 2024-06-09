vector<int> bfsOfGraph(int v, vector<int> adj[]) {
        vector<int> ans;
        
        queue<int> q;
        int visited[v] = {0};
        
        visited[0] = 1;
        q.push(0);
        
        while(!q.empty())
        {
            int x = q.front();
            ans.push_back(x);
            q.pop();
            
            for(auto it : adj[x])
            {
                if(!visited[it]){
                    visited[it] = 1;
                    q.push(it);
                }
            }
        }
        return ans;
    }
