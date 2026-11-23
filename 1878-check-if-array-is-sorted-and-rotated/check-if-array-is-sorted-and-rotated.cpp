class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size(), sum = 0;

        for(int i = 0; i<n; i++)
        {
            if(nums[i] > nums[(i+1)%n]) sum++;
        }
        return sum <= 1;
    }
};