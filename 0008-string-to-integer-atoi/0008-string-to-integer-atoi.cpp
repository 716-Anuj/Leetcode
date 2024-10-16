class Solution {
public:
    int myAtoi(string s) {
        int size = s.size();
        int i = 0;
        double result = 0;
        int flag = 0;

        while(i < size && s[i] == ' ') i++;

        if(i < size) {
            if(s[i] == '-') {
                flag = 1;
                i++;
            }
            else if(s[i] == '+') {
                i++;
            }
        }

        while(i < size && isdigit(s[i])){
            result = result * 10 + (s[i] - '0');
            i++;
        }
        if(flag == 1 && (-1 * result) >= INT_MIN) return -1*result;
        else if(flag == 1 && (-1* result < INT_MIN)) return INT_MIN;
        else if(result > INT_MAX) return INT_MAX;
        return result;
    }
};