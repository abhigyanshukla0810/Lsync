class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        
        for(int i = 0; i < n; i++) nums[i] = abs(nums[i]);
        sort(nums.begin(), nums.end());

        long long sum=0;
        int i = n-1, j=0;
        while(i>j) {
            sum += 1LL*nums[i]*nums[i];
            sum -= 1LL*nums[j]*nums[j];
            i--;
            j++;
        }
        if(i == j)sum += 1LL * nums[i] * nums[i];
        return sum;
    }
};