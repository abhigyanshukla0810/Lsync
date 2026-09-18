class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        unordered_map <int,int> mpp;
        for(int x : nums){
            mpp[x]++;
            if(mpp[x] == n/2) return x; 
        }
        return 0;
    }
};