class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector <int> v;
        int i = 1;
        for(int i = 0; i<n-1;i++){
            if(nums[i] == nums[i+1]){
                v.emplace_back(nums[i]);
                break;
            }
        }
        set <int> sst;
        for(int x : nums) sst.insert(x);
        for(auto it : sst){
            if(it != i){
                v.emplace_back(i);
                return v;
            }
            i++;
        }
        v.emplace_back(i);
        return v;
    }
};