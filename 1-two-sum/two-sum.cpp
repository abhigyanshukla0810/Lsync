class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> mpp;
        int x = 0,i = 0;
        int n = nums.size();
        for(i = 0; i<n;i++)mpp[nums[i]] = i;
        for(i = 0; i<n;i++){
            x = target - nums[i];
            if(mpp.find(x) != mpp.end() && mpp[x] != i) break;
        }
        int a = mpp[x]; 
        int b = i;
        return {a,b};
                
    };
};