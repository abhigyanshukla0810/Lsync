class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m = INT_MIN, sum = 0;
        for(int x : nums){
            sum += x;
            m = max(sum,m);
            if(sum <= 0) sum = 0;
        }
        return m;
    }
};