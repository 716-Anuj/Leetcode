class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        int count = 0;

        for(auto it : nums) {
            mp[it]++;
        }

        for(auto it : mp) {
            cout<<it.first<<" "<<it.second<<endl;
        }

        for(auto it : mp) {
            if(it.second == 1) return -1;
            count += it.second/3;
            if(it.second % 3) count++;
        }
        return count;
    }
};