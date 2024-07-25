class Solution {
public:
    bool isIsomorphic(string s, string t) {
       unordered_map<char, int> p, q;

       for(int i = 0; i < s.length(); i++) {
        if(p.count(s[i]) == 0) {
            p[s[i]] = p.size();
        }
       }

       for(int i = 0; i < t.length(); i++) {
        if(q.count(t[i]) == 0) {
            q[t[i]] = q.size();
        }
       }

       for(int i = 0; i < s.size(); i++) {
        if(p[s[i]] != q[t[i]]) {
            return false;
        }
       }
       return true;
    }
};