class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0,n = nums.size();
        unordered_set <int> sst;
        for(int i = n-1; i>=0 && sst.size()<k;i--){
            sum++;
            if(nums[i] <=k) sst.insert(nums[i]);
        }
        return sum;
    }
};