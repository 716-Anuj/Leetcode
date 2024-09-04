class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();

        for(int i = 0; i < size2; i++) {
            nums1.push_back(nums2[i]);
        }

        sort(nums1.begin(), nums1.end());

        if(nums1.size()%2 != 0) return (double)nums1[nums1.size()/2 ];
        return (nums1[nums1.size()/2 - 1] + nums1[nums1.size()/2])/2.0;
    }
};