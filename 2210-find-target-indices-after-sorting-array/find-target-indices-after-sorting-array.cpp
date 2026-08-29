class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int sum = 0;
        int dup = 0;
        for(int x : nums){
            if(x<target) sum++;
            if(x == target) dup++;
        }
        vector <int> v;
        for(int i = sum; i<(sum+dup); i++) v.emplace_back(i);
        return v;
    }
};