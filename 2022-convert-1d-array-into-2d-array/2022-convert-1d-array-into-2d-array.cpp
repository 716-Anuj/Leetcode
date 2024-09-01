class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int size = original.size();
        vector<vector<int>> arr(m, vector<int>(n));
        int k = 0;

        if(m * n != size) return {};

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(k < size)
                arr[i][j] = original[k++];
            }
        }
        return arr;
    }
};