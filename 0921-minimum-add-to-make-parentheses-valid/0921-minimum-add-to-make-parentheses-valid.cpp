class Solution {
public:
    int minAddToMakeValid(string s) {
        int size = s.size();
        int count1 = 0;
        int count2 = 0;

        for(int i = 0; i < size; i++) {
            if(s[i] == '(') {
                count1++;
            } else {
                if(count1 > 0) {
                    count1--;
                }
                else {
                    count2++;
                }
            }
        }
        return count1+count2;
    }
};