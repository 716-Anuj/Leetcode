class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> arr;
        int count = 0;
        int k;

        for(int i = 0; i <= n; i++) {
            count = 0;
            int k = i;
            while(k != 0) {
                count += k&1;
                k = k>>1; 
            }
            arr.push_back(count);
        }
     return arr;   
    }
};