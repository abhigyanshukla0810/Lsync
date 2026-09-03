class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int even = INT_MAX, odd = INT_MAX;
        for(int x : nums1){
            if(x&1) odd = min(odd, x);
            else even = min(even, x);
        }
        if(odd == INT_MAX || even == INT_MAX) return true;
        return odd < even;
    }
};