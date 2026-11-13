class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int arr1[101] = {0};
        int arr2[101] = {0};
        for(int x : nums1) arr1[x]++;
        for(int x : nums2) arr2[x]++;
        int ans1 = 0, ans2 = 0;
        for(int i = 0; i<101;i++)
        {
            if(arr1[i] > 0) ans2 += arr2[i];
            if(arr2[i] > 0) ans1 += arr1[i];
        }
        return {ans1,ans2};
    }
};