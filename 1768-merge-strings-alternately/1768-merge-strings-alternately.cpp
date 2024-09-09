class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int size1 = word1.size();
        int size2 = word2.size();

        int i = 0, j = 0;

        string result = "";

        while(i < size1 && j < size2) {
            result += word1[i++];
            result += word2[j++];
        }

        while(i < size1) {
            result += word1[i++];
        }

        while(j < size2) {
            result += word2[j++];
        }
        return result;
    }
};