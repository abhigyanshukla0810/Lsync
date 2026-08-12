class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map <int,int> mpp;
        int maxlen = 0, i = 0, j = 0;
        while(j<n){
            mpp[nums[j]]++;
            while( i < j && mpp[nums[j]] > k){
                mpp[nums[i]]--;
                i++;
            }
            maxlen = max(maxlen,j - i + 1);
            j++;
        }
        return maxlen;
    }
};