class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> a;

        int row_size = matrix.size();
        int col_size = matrix[0].size();

        int top = 0, left = 0, right = col_size-1, bottom = row_size-1;

        while(top <= bottom && left <= right)
        {
            for(int i = left; i <= right; i++)
            {
                a.push_back(matrix[top][i]);
            }
            top++;

            for(int j = top; j <= bottom; j++)
            {
                a.push_back(matrix[j][right]);
            }
            right--;

            if(top <= bottom)
            for(int i = right; i >= left; i--)
            {
                a.push_back(matrix[bottom][i]);
            }
            bottom--;

            if(left <= right)
            for(int j = bottom; j >= top; j--)
            {
                a.push_back(matrix[j][left]);
            }
            left++;
        }
        return a;
    }
};