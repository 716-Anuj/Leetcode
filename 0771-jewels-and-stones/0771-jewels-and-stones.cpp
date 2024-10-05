class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int size1 = jewels.size();
        int size2 = stones.size();

        // vector<int>alphabet(26, 0);
        // vector<int>Alphabet(26, 0);

        int result = 0;

        // for(int i = 0; i < size2; i++) {
        //     if(stones[i] >= 'a' && stones[i] <= 'z') {
        //         alphabet[stones[i] - 'a']++;
        //     }
        // }

        // for(int i = 0; i < size2; i++) {
        //     if(stones[i] >= 'A' && stones[i] <= 'Z') {
        //         Alphabet[stones[i] - 'A']++;
        //     }
        // }

        // for(int i = 0; i < size1; i++) {

        // }

        for(int i = 0; i < size1; i++) {
            for(int j = 0; j < size2; j++) {
                if(jewels[i] == stones[j]) result++;
            }
        }
        return result;
    }
};