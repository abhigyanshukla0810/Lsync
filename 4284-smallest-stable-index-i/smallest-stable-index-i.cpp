class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int i = 0, n = nums.size(), men = INT_MAX,mex = INT_MIN;
        vector <int> sex(n);
        for(int i = n-1; i>=0;i--){
            men = min(men,nums[i]);
            sex[i] = men;
        }
        for(int i = 0; i<n;i++){
            mex = max(nums[i],mex);
            if(mex - sex[i] <=k) return i;
        }
        return -1;   
    }
};