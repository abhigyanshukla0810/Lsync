class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int x = nums.size();
        if(x <=2) return x;
        int y = 1;
        while(y<=x) y = y << 1;
        return y;
    }
};