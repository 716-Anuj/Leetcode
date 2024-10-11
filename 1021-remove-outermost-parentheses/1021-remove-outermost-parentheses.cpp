class Solution {
public:
    string removeOuterParentheses(string s) {
        int size = s.size();
        string result = "";
        int count = 0;
        
        for(int i = 0; i < size; i++) {
            if(s[i] == '(' && count == 0) {
                count++;
            }
            else if(s[i] == '(') {
                result += s[i];
                count++;
            }
            else if(s[i] == ')' && count == 1) {
                count--;
            }
            else {
                result += s[i];
                count--;
            }
        }
        return result;
    }
};