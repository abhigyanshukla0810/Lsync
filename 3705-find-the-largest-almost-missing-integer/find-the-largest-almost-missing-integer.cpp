class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        if(k == 1 ){
            int arr[52] = {0};
            for(int x : nums) arr[x]++;
            for(int i = 51; i>=0;i--){
                if(arr[i]==1) return i;
            }
            return -1;
        }
        if(k==n){
            return *max_element(nums.begin(), nums.end());
        }
        int arr[52] = {0};
        for(int x : nums) arr[x]++;
        if(arr[nums[0]] == 1 && arr[nums[n-1]] == 1){
            return max(nums[0], nums[n-1]);
        }
        else if(arr[nums[0]] == 1) return nums[0];
        else if(arr[nums[n-1]] == 1) return nums[n-1];
        return -1;
    }
};