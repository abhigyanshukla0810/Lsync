class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int max1 = 0, max2 = 0;
        for(int x : nums1) if(max1 < x) max1 = x;
        for(int x : nums2) if(max2 < x) max2 = x;
        return max2 - max1;
    }
};