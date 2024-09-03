class Solution {
public:
    string digitSum(string s, int k) {
        vector<int> ans;

        while(s.size() > k) {
            for(int i = 0; i < s.size(); i++) {
                int num = 0;
                for(int j = 0; j < k; j++) {
                    if(i < s.size()) {
                        num = num + s[i] - '0';
                        i++;
                    }
                }
                i--;
                ans.push_back(num);
            }
        s.clear();

        for(int i = 0; i < ans.size(); i++) {
            s = s + to_string(ans[i]);
        }
        ans.clear();
        }
        return s;
    }
};