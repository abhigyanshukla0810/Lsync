class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector <int> v = nums;
        int n = nums.size();
        for(int i =0; i<n;i++) v.emplace_back(nums[n-i-1]);
        return v;
    }
};