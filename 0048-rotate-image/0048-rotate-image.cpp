class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row_size = matrix.size();
        int col_size = matrix[0].size();

        vector<vector<int>> new_matrix(row_size, vector<int>(row_size, 0));

        for(int i = 0; i < row_size; i++) {
            int size = row_size-1;
            for(int j = 0; j < col_size; j++) {
                new_matrix[i][j] = matrix[size][i];
                size--;
            }
        }

        for(int i = 0; i < row_size; i++) {
            for(int j = 0; j < col_size; j++) {
                matrix[i][j] = new_matrix[i][j];
            }
        }
        
    }
};