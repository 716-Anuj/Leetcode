class Solution {
public:
    bool isPalindrome(string s) {

        int size = s.size();
        string str = "";

        for(int i = 0; i < size; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 'a'-'A';
        }

        for(int i = 0; i < size; i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9')
            {
                str += s[i];
            }
        }
        int start = 0;
        int end = str.size()-1;

        while(start <= end)
        {
            if(str[start] != str[end])
            return false;
            start++;
            end--;
        }
        return true;
    }
};