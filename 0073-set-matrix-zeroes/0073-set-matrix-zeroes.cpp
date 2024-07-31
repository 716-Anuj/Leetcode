class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row_size = matrix.size();
        int col_size = matrix[0].size();

        vector<int> r(row_size, 0);
        vector<int> c(col_size, 0);

        for(int i = 0; i < row_size; i++) {
            for(int j = 0; j < col_size; j++) {
                if(matrix[i][j] == 0) {
                    r[i] = 1;
                    c[j] = 1;
                }
            }
        }

        for(int i = 0; i < row_size; i++) {
            for(int j = 0; j < col_size; j++) {
                if(r[i] == 1 || c[j] == 1) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};