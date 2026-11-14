class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int ans = 0;
        int minsum = INT_MAX, sum = 0;
        bool rand = false;
        for(int i = 0; i<=n-l; i++)
        {
            for(int j = i+l-1; j<i+r && j<n;j++)
            {
                sum = 0;
                for(int k = i; k<=j;k++)
                {
                    sum += nums[k];
                }
                if(sum > 0 && sum < minsum)
                {
                    minsum = sum;
                    rand = true;
                }
            }
        }
        if(!rand) return -1;
        return minsum;
    }
};