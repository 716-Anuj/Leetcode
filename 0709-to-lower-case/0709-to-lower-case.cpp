class Solution {
public:
    string toLowerCase(string s) {
        int size = s.size();

        for(int i = 0; i < size; i++) {
            s[i] = tolower(s[i]);
        }
        return s;
    }
};