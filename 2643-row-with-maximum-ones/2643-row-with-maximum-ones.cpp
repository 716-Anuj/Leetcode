class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int row = mat.size();
        int col = mat[0].size();
        int index = 0, count, max = 0;
        vector<int> ans;

        for (int i = 0; i < row; i++) {
            count = 0;
            for (int j = 0; j < col; j++) {
                if (mat[i][j] == 1) {
                    count++;
                }
                if (max < count) {
                    index = i;
                    max = count;
                }
            }
        }
        ans.push_back(index);
        ans.push_back(max);
        return ans;
    }
};