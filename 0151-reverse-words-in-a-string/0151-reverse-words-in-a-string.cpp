class Solution {
public:
    string reverseWords(string s) {
        int size = s.size();
        string rev = "";
        string temp = "";
        int j;

        for(int i = 0; i < size; i++) {
            temp = "";
            while(i < size && s[i] == ' ') {
                i++;
            }
            
            if(i >= size) break;
            j = i;
            
            while(j < size && s[j] != ' ') {
                temp += s[j++];
            }

            if(rev.empty()) {
                rev += temp;
            } else {
                rev = temp + ' '+ rev;
            }
            i = j;
        }
        return rev;
    }
};