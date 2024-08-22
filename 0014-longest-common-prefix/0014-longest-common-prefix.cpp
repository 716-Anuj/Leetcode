class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int size = strs.size();
        int stringSize = strs[0].size();
        string ans = "";
        int i = 0;

        sort(strs.begin(), strs.end());

        while(i < stringSize && strs[0][i] == strs[size-1][i]) {
            ans += strs[0][i];
            i++;
        }
        return ans;
    }
};