class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min = nums[0],max=nums[0];
        for(int z : nums){
            if(min>z) min = z;
            else if(max<z) max = z;
        }
        return gcd(min,max);
    }
};