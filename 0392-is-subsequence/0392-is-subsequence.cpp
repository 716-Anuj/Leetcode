class Solution {
public:
    bool isSubsequence(string s, string t) {
        int tSize = t.size();
        int sSize = s.size();
        int count = 0;
        int j = 0;

        for(int i = 0; i < tSize; i++) {
            if(s[j] == t[i]) {
                count++;
                j++;
            }
        }

        if(count == sSize) {
            return true;
        }
        return false;
    }
};