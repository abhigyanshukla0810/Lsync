class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if(n == 1 || n==2) return n;
        int largest = INT_MIN, smallest = INT_MAX, x = 0,y = 0;
        for(int i = 0;i<n;i++){
            if(largest<nums[i]){
                largest = nums[i];
                x = i;
            }
            if(smallest>nums[i]){
                smallest = nums[i];
                y = i;
            }
        }
        if(x<y) swap(x,y);
        int l = x + 1;
        int r = n-y;
        int lund = y+1 + n - x; 
        return min({l,r,lund});
    }
};