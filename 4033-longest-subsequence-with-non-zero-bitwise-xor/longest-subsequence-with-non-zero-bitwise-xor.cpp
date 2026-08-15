class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        
        int result = 0, zeroes = 0;
        for(int x : nums){
            result ^= x;
            if(x == 0) zeroes++;
        }
        if(zeroes == nums.size()) return 0;
        if(result != 0) return nums.size();
        return nums.size() - 1;

    }
};