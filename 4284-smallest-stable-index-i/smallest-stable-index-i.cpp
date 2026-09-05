class Solution{
public:
    int firstStableIndex(vector<int>& nums, int k){
        int i = 0, n = nums.size();
        for(i = 0; i<n;i++){
            int mex = INT_MIN,  men = INT_MAX;
            for(int j = 0; j<=i;j++) mex = max(nums[j],mex);
            for(int j = i; j<n;j++) men = min(nums[j],men);
            if(mex-men<=k) return i;
        }
        return -1;
    }
};