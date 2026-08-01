class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector <int> v;
        int j = nums[0];
        for(int x : nums){
            if(x == j) j++;
            else{
                while(x > j){
                    v.emplace_back(j);
                    j++;
                }
                j++;
            }
        }
        return v;
    }
};