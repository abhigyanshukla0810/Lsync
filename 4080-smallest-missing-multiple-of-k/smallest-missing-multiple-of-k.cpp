class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set <int> sst;
        for(int x : nums) sst.insert(x);
        int i = 0;
        for(i = 1; i<=100;i++){
            if(sst.find(k*i) != sst.end()) continue;
            else break;
        }
        return k*i;
    }
};