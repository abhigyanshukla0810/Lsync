class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums){
        unordered_set <int> sst;
        for(int i = 0; i<nums.size();i++){
            for(int j = i; j<nums.size();j++){
                sst.insert(nums[i] ^ nums[j]);
            }
        }
        int i = 0;
        unordered_set <int> sst1;
        for(auto it : sst){
            for(int x : nums) sst1.insert(it ^ x);
        }
        return sst1.size();
    }
};