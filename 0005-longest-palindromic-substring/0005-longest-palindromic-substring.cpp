class Solution {
public:
    string longestPalindrome(string s) {
        int size = s.size();
        string result = "";
        int count = 0;

        for(int i = 0; i < size; i++) {
            int left = i;
            int right = i;

            while(left >= 0 && right < size && s[left] == s[right]) {
                if(right-left+1 > count) {
                    count = right-left+1;
                    result = s.substr(left, count);
                }
                left--;
                right++;
            }

            left = i;
            right = i+1;

            while(left >= 0 && right < size && s[left] == s[right]) {
                if(count < right-left+1) {
                    count = right-left+1;
                    result = s.substr(left, count);
                }
                left--;
                right++;
            }
        }
        return result;
    }
};