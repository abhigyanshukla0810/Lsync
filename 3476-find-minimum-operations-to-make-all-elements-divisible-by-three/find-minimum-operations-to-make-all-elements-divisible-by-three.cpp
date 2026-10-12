class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int sum = 0;
        for(int &x : nums)
        {
            if(x%3 != 0) sum++;
        }
        return sum;
    }
};