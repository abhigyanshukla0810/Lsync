class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector <int> v;
        int arr[100010] = {};
        for(int x : nums){
            arr[x]++;
            if(arr[x] == 2)v.emplace_back(x);
        }
        return v;
    }
};