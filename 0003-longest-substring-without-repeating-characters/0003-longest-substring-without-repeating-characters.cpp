class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.size();
        int ans = 0;
        int start = 0;
        int count = 0;

        unordered_map<char, int>mp;

        for(int i = 0; i < size; i++) {
            if(mp.find(s[i]) != mp.end() && mp[s[i]] >= start) {
                start = mp[s[i]] + 1;
                count = i-start+1;
            }
            else {
                count++;
            }
            mp[s[i]] = i;
            ans = max(ans, count);
        }
        return ans;
    }
};