class Solution {
public:
    string largestOddNumber(string num) {
       int size = num.length()-1;

        while(size >= 0 && ((num[size] - '0') & 1) == 0) {
           size--;
        }
        return num.substr(0, size+1);
    }
};