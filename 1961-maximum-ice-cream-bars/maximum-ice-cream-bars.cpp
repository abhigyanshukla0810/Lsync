class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans = 0;
        for(int &x : costs)
        {
            if(coins>=0)
            {
                ans++;
                coins -=x;
            }
        }
        if(coins<0) return ans-1;
        return ans;
    }
};