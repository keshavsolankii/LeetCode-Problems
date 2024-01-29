class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col_num = matrix[0].size();
        int row_num = matrix.size();
        int curr_row = 0, curr_col = col_num-1;
        while(curr_row < row_num && curr_col >= 0)
        {
            if(target == matrix[curr_row][curr_col])
                return true;
            else if(target > matrix[curr_row][curr_col])
                curr_row++;
            else
                curr_col--;
        }
        return false;
    }
};
