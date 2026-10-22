class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int Min = INT_MAX;
        int a = -1;
        int n = nums.size();
        for(int i = 0; i<n; i++)
        {
            if(nums[i] < 0) nums[i] = -nums[i];
            if(Min > nums[i])
            {
                Min = nums[i];
                a = i;
            }
        }
        int i = a, j = a+1;
        vector <int> v;
        while(i>=0 && j<n)
        {
            if(nums[i] > nums[j])
            {
                v.emplace_back(nums[j]*nums[j]);
                j++;
            }
            else
            {
                v.emplace_back(nums[i]*nums[i]);
                i--;
            }
        }
        if(i<0)
        {
            while(j<n)
            {
                v.emplace_back(nums[j]*nums[j]);
                j++;
            }
        }
        if(j==n)
        {
            while(i>=0)
            {
                v.emplace_back(nums[i]*nums[i]);
                i--;
            }
        }
        return v;

    }
};