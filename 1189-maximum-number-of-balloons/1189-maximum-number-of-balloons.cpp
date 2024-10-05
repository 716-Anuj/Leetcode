class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int size = text.size();
        vector<int>count(26, 0);

        for(int i = 0; i < size; i++) {
            count[text[i]-'a']++;
        }

        int result = count[1];
        result = min(count[0], result);
        result = min(count[11]/2, result);
        result = min(count[14]/2, result);
        result = min(count[13], result);

        return result;

    }
};