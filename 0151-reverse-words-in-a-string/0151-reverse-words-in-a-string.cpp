class Solution {
public:
    string reverseWords(string s) {
        int size = s.size();
        int i = 0, j;
        string rev = "";

        while(i < size)
        {
            string temp = "";
            while(i < size && s[i] == ' ')
            {
                i++;
            }
            if(i >= size)
            break;

            j = i;
            while(j < size && s[j] != ' ')
            {
                temp += s[j++];
            }

            
            if(rev.size() == 0)
            rev += temp;
            else{
                rev = temp + " " + rev;
            }
            i = j+1;
        }
        return rev;
        
    }
};