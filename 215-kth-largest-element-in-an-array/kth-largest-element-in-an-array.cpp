class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> q;
        for(int &x : nums) q.push(x);
        int x = 0;
        while(k--)
        {
            x = q.top();
            q.pop();
        }
        return x;
    }
};