class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int size = nums.size();
        vector<int> list;
        map<int, int>mp;

        for(int i = 0; i < size; i++){
            if(mp.find(target - nums[i]) == mp.end()){
                mp[nums[i]] = i;
            } 
            else{
                list.push_back(i);
                list.push_back(mp[target - nums[i]]);
                break;
            }
        }
        return list;
    }
};