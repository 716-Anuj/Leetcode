class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int g_size = g.size();
        int s_size = s.size();
        int count = 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int l = 0;  //greedy pointer
        int r = 0;  //size pointer
        
        while(r < s_size && l < g_size) {
            if(s[r] >= g[l]) {
                count++;
                r++;
                l++;
            }
            else{
                r++;
            }
        }
       return count;
    }
};