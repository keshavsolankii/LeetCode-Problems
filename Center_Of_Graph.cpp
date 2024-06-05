class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int i=0, j=0;
        if(edges[i][j] == edges[i+1][j] || edges[i][j] == edges[i+1][j+1])
            return edges[i][j];
        else
            return edges[i][j+1];
    }
};
