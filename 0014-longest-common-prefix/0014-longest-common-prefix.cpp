class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int row_size = strs.size();
        int col_size = strs[0].size();
        string result = "";
        int flag = 1;

        for(int i = 0; i < col_size; i++) {
            for(int j = 0; j < row_size; j++) {
                if(strs[j][i] != strs[0][i]) {
                    flag = 0;
                }
            }
            if(flag == 0) break;
            else {
                result += strs[0][i];
            }
        }
        return result;
    }
};