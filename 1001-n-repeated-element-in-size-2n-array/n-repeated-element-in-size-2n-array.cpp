class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        int freq[50001] = {0};
        for(int x : nums){
            freq[x]++;
            if(freq[x] == n/2) return x;
        }
        return 0;
    }
};