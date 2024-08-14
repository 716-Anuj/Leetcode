class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int row_size = accounts.size();
        int col_size = accounts[0].size();
        int result = 0;
        int sum;

        for(int i = 0; i < row_size; i++) {
            sum = 0;
            for(int j = 0; j < col_size; j++) {
                sum += accounts[i][j];
            }
            result = max(result, sum);
        }
        return result;
    }
};