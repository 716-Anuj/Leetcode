class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int size1 = nums1.size();
        int size2 = nums2.size();

        if(size1 == 0) return nums2;
        if(size2 == 0) return nums1;

        set<int> s;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0, j = 0;

        while(i < size1 && j < size2) {
            if(nums1[i] == nums2[j]) {
                s.insert(nums1[i]);
                i++;
                j++;
            } 
            else if(nums1[i] > nums2[j]) {
                j++;
            }
            else {
                i++;
            }
        }
        return vector<int>(s.begin(), s.end());
    }
};