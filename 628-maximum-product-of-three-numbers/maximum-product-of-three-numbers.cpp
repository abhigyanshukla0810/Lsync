class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        if(nums.size()==3) return nums[0]*nums[1]*nums[2];
        int m1=INT_MIN,m2=INT_MIN,m3=INT_MIN,n1 = 0,n2 = 0;
        for(int x : nums){
            if(x > m1){
                m3 = m2;
                m2 = m1;
                m1 = x;
            }
            else if(x > m2){
                m3 = m2;
                m2 = x;
            }
            else if(x > m3) m3 = x;
            if(x < n1){
                n2 = n1;
                n1 = x;
            }
            else if(x < n2) n2 = x;
        }
        int max1 = m3*m2*m1;
        int max2 = n2 * n1 * m1;
        if(max1 > max2) return max1;
        return max2;
    }
};