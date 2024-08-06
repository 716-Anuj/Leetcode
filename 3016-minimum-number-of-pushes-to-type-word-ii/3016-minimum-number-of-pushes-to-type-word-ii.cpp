class Solution {
public:
    int minimumPushes(string word) {
        int size = word.size();
        int freq[26] = {0};

        for(int i = 0; i < size; i++) {
            freq[word[i]-'a']++;
        }

        sort(freq, freq+26);
        int result = 0;

        for(int i = 25; i >= 0 && freq[i] != 0; i--) {
            result += freq[i] * ((25-i)/8 + 1);
        }
        return result;
    }
};