class Solution {
public:
    int characterReplacement(string s, int k) {
        int size = s.size();
        int result = 0;

        for(char i = 'A'; i <= 'Z'; i++) {
            int j = 0, l = 0, temp = 0;
            while(l < size) {
                if(i == s[l]) {
                    l++;
                }
                else if(temp < k) {
                    l++;
                    temp++;
                }
                else if(s[j] != i) {
                    j++;
                    temp--;
                }
                else {
                    j++;
                }
               
                result = max(result, l-j);
            }
        }
        return result;
    }
};