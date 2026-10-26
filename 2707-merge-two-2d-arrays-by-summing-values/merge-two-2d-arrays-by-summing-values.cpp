class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        vector <vector<int>> v;
        int n = nums1.size();
        int m = nums2.size();
        int j = 0, i = 0;
        while(i<n && j<m)
        {
            if(nums1[i][0] == nums2[j][0])
            {
                nums1[i][1] += nums2[j][1];
                v.emplace_back(nums1[i]);
                i++; j++;
            }
            else if(nums1[i][0] < nums2[j][0])
            {
                v.emplace_back(nums1[i]);
                i++;
            }
            else
            {
                v.emplace_back(nums2[j]);
                j++;
            }
        }
        if(i == n)
        {
            while(j<m)
            {
                v.emplace_back(nums2[j]);
                j++;   
            }
        }
        else if(j==m)
        {
            while(i<n)
            {
                v.emplace_back(nums1[i]);
                i++;
            }
        }
        return v;
    }
};