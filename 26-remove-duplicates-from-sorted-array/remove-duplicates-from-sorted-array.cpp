class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int sum = 0;
        vector <int> v;
        for(int i = 0; i<nums.size()-1;){
            if(nums[i] != nums[i+1]){
                sum++;
                i++;
            }
            else nums.erase(nums.begin() + i+1);
        }
        return sum+1;
    }
};