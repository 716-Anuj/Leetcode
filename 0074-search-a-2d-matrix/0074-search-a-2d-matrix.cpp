class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row_size = matrix.size();
        int col_size = matrix[0].size();
        int row_index = row_size-1;

        for(int i = 0; i < row_size-1; i++) {
            if(matrix[i][0] <= target && matrix[i+1][0] > target) {
                row_index = i;
                break;
            }
        }

        for(int i = 0; i < col_size; i++) {
            if(matrix[row_index][i] == target) {
                return true;
            }
        }
        return false;
    }
};