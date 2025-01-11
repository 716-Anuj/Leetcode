class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int mod = 12345;
        
        int row_size = grid.size();
        int col_size = grid[0].size();

        vector<vector<int>> ans(row_size, vector<int>(col_size));

        long prod = 1;

        for(int i = 0; i < row_size; i++) {
            for(int j = 0; j < col_size; j++) {
                ans[i][j] = prod;
                prod = (prod * grid[i][j]) % mod;
            }
        }

        prod = 1;

        for(int i = row_size-1; i >= 0; i--) {
            for(int j = col_size-1; j >= 0; j--) {
                ans[i][j]= (ans[i][j] * prod) % mod;
                prod = (prod * grid[i][j]) % mod;
            }
        }
        return ans;
    }
};