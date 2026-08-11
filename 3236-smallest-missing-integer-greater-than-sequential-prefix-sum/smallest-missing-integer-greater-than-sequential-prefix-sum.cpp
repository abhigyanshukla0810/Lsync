class Solution {
public:
    int missingInteger(vector<int>& nums){
        int n = nums.size();
        if(n==1) return nums[0] + 1;
        int sum = nums[0];
        for(int i = 0; i<n-1;i++){
            if(nums[i] == nums[i+1]-1) sum += nums[i+1];
            else break;
        }
        sort(nums.begin(),nums.end());
        for(int x : nums){
            if(sum == x){
                sum++;
            }
        }
        return sum;
    }
};