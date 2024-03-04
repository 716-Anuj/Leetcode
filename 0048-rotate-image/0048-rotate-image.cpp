class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();


        vector<vector<int>>matrix1(row , vector<int>(row, 0));

        for(int i = 0; i < row; i++)
        {
            for(int j = row-1; j >= 0; j--)
            {
                matrix1[i][row - 1 - j] = matrix[j][i];
            }
        }

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < row; j++)
            {
                matrix[i][j] = matrix1[i][j];
            }
        }
    }
};