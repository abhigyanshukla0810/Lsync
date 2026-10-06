class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sum = 0;
        for(int &x : nums) sum+=x;
        if(sum%k == 0) return 0;
        else if(sum % k == sum) return sum;
        return sum%k;
    }
};