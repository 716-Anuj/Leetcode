class Solution {
public:
    int getLucky(string s, int k) {
        int size = s.size();
        unsigned long long ans = 0;
        string result = "";

        for(int i = 0; i < size; i++) {
            int num = s[i] - 'a' + 1;
            result += to_string(num);
        }

        for(int i = 0; i < k; i++) {
            ans = 0;
            for(int i = 0; i < result.size(); i++) {
                ans += result[i] - '0';
            }
            result.clear();
            result += to_string(ans);
        }
        return stoi(result);
    }
};