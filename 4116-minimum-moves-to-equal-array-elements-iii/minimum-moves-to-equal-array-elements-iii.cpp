class Solution {
public:
    int minMoves(vector<int>& nums) {
        int Max = 0;
        for(int x : nums)
        {
            Max = max(x,Max);
        }
        int sum = 0;
        for(int x : nums)
        {
            if(x < Max) sum += (Max - x);
        }
        return sum;
    }
};