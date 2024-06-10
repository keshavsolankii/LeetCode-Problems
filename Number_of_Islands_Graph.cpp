class Solution {
public:

    void bfs(int row, int col, vector<vector<char>>& grid, vector<vector<int>>& vis)
    {
        vis[row][col] = 1;
        queue<pair<int, int>> q;
        q.push({row, col});

        int m = grid.size();
        int n = grid[0].size();

        while(!q.empty())
        {
            int currow = q.front().first;
            int curcol = q.front().second;
            q.pop();

            int siderow[] = {-1, 0, 1, 0};
            int sidecol[] = {0, -1, 0, 1};

            for(int i=0; i<4; i++){
                int nrow = currow + siderow[i];
                int ncol = curcol + sidecol[i];

                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol] == '1'
                 && !vis[nrow][ncol]){
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> vis(m, vector<int>(n, 0));

        int count=0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(!vis[i][j] && grid[i][j] == '1'){
                    count++;
                    bfs(i, j, grid, vis);
                }
            }
        }
        return count;
    }
};
