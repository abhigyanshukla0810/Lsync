class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        vector <priority_queue<int>> p;
        int n = grid[0].size();
        int m = grid.size();
        for(int i = 0; i<m; i++)
        {
            p.emplace_back(grid[i].begin(),grid[i].end());
        }
        int sum = 0;
        while(n--)
        {
            int Max = 0;
            for(auto &x : p)
            {
                int ele = x.top();
                Max = max(ele,Max);
                x.pop();
            }
            sum +=Max;
        }
        return sum;
    }
};