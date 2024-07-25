class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> st;
        string curr = "";

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == ' ') {
                st.push_back(curr);
                curr = "";
                continue;
            }
            curr += s[i];
        }
        st.push_back(curr);

        if(pattern.size() != st.size()) {
            return false;
        }

        unordered_map<char, int> p;
        unordered_map<string, int> q;

        for(int i = 0; i < pattern.size(); i++) {
            if(p.count(pattern[i]) == 0) {
                p[pattern[i]] = p.size();
            }
        }

        for(int i = 0; i < st.size(); i++) {
            if(q.count(st[i]) == 0) {
                q[st[i]] = q.size();
            }
        }

        for(int i = 0; i < pattern.size(); i++) {
            if(p[pattern[i]] != q[st[i]]) {
                return false;
            }
        }
        return true;
    }
};