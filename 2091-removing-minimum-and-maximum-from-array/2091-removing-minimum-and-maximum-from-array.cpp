class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int s;
        s = nums.size();
        int minimum = *min_element(nums.begin(), nums.end());
        int maximum = *max_element(nums.begin(), nums.end());
        int index, index1, index2, index11, index21, max1;

        for(int i = 0; i < s; i++)
        {
            if(nums[i] == minimum)
            {
                index1 = i;
                break;
            }
        }

        for(int i = 0; i < s; i++)
        {
            if(nums[i] == maximum)
            {
                index2 = i;
                break;
            }
        }

        // index11 = s - index1;
        // index21 = s - index2;

        // int min1 = min(index1, index11);
        // int min2 = min(index2, index21);

        // if(min1 == index1 && min2 == index2)
        // {
        //     max1 = max(index1, index2) + 1;
        // }

        // else if(min1 == index11 && min2 == index21){
        //     max1 = s - max(min1, min2);
        // }

        // else if(min1 == index1 && min2 == index21)
        // {
        //     max1 = index1 + index21 ;
        // }

        // else{
        //     max1 = index2 + index11 ;
        // }
        // return max1;

        int res = INT_MAX;

        int l = min(index1, index2);
        int r = max(index1, index2);

        res = min(res, r + 1);
        res = min(res, s - l);
        res = min(res, l + 1 + s - r);

        return min(r + 1, min(s - l, l + 1 + s - r));
    }
};