class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> result;
        vector<int> prev_row;

        for(int i = 0; i < numRows; i++) {
            vector<int> current_row(i+1, 1);

            for(int j = 1; j < i; j++) {
                current_row[j] = prev_row[j-1] + prev_row[j];
            }

            result.push_back(current_row);
            prev_row = current_row;
        }
        return result;
    }
};