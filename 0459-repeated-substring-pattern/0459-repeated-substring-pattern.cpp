class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string concatenate = s+s;
        string sub = concatenate.substr(1, concatenate.size()-2);
        return sub.find(s) != string::npos;
    }
};