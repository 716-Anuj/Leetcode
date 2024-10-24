class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> s;

        for(auto i : arr1) {
            while(i) {
                s.insert(i);
                i /= 10;
            }
        }

        int mxlen = 0;

        for(auto i : arr2) {
            while(i) {
                if(s.count(i)) {
                    mxlen = max(mxlen, (int)log10(i) + 1);
                }
                i /= 10;
            }
        }
        return mxlen;
    }
};