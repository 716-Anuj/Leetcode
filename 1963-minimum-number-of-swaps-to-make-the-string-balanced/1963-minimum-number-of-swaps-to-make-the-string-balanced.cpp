class Solution {
public:
    int minSwaps(string s) {
        int size = s.size();
        int count = 0;

        for(int i = 0; i < size; i++) {
            if(s[i] == '[') {
                count++;
            }
            else if(count > 0) {
                count--;
            }
        }
        return (count+1)/2;
    }
};