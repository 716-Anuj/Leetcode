class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        int size = s.size();
        int size1 = words.size();
        int k = 0;

        for(int i = 0; i < words.size(); i++) {
            for(int j = 0; j < words[i].size(); j++) {
                if(k >= s.size()) return false;
                if(s[k++] != words[i][j]) return false;
            }
            if(k == s.size()) return true;
        }
        return k == s.size();
    }
};