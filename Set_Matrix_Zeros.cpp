class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> v;
        int row = matrix.size();
        int col = matrix[0].size();
    
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(matrix[i][j] == 0)
                    v.push_back({i, j});
            }
        }

        for(int i=0; i<v.size(); i++)
        {
            int x = v[i].first;
            int y = v[i].second;

            for(int m=0; m<row; m++)
                matrix[m][y] = 0;
            for(int m=0; m<col; m++)
                matrix[x][m] = 0;
        }
    }
};
