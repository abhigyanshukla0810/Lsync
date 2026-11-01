class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int sum = 0;
        for(auto x : grid)
        {
            if(x[0]<0) sum += x.size();
            else
            {
                int i = x.size()-1;
                while(x[i]<0)
                {
                    sum++;
                    i--;
                }
            }
        }
        return sum;

    }
};