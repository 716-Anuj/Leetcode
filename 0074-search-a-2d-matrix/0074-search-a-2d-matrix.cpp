class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int i = 0, j = m-1;

        while(i >= 0 && i < n && j >= 0 && j < m)
        {
            if(target == matrix[i][j])
            return true;

            else if(target > matrix[i][j])
            i++;

            else if(target < matrix[i][j])
            j--;
        }
        return false;
    }
};