class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue q(piles.begin(),piles.end());
        while(k--)
        {
            int x = q.top();
            q.pop();
            q.push(x - (x/2));
        }
        int sum = 0;
        while(!q.empty())
        {
            sum += q.top();
            q.pop();
        }
        return sum;
    }
};