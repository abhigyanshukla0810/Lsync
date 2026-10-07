class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cost = 0, mini = INT_MAX, profit = INT_MIN;
        for(int &x : prices)
        {
            mini = min(mini,x);
            cost = x - mini;
            profit = max(cost,profit);
        }
        return profit;

    }
};