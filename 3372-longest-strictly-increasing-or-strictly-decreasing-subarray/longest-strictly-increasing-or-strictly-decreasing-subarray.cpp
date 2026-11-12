class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int sum1 = 1, sum2 = 1;
        int ans1 = 1, ans2 = 1;
        for(int i = 1; i<n; i++)
        {
            if(nums[i-1] < nums[i])
            {
                sum1++;
                sum2 = 1;
            } 
            else if(nums[i-1] > nums[i])
            {
                sum2++;
                sum1 = 1;
            }
            else 
            {
                sum1 = 1;
                sum2 = 1;
            }
            ans1 = max(sum1, ans1);
            ans2 = max(sum2,ans2);
        }
        return max(ans1,ans2);

    }
};