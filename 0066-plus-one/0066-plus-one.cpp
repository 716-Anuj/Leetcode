class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        vector<int> ans;
        
        for(int i = size-1; i >= 0; i--) {
            if(digits[i] < 9) {
                digits[i] = digits[i] + 1;
                return digits;
            }
            else {
                digits[i] = 0;
            }
        }

        if(digits[0] == 0) {
            ans.push_back(1);

            for(int i = 0; i < size; i++) {
                ans.push_back(digits[i]);
            }
        }
        return ans;
    }
};