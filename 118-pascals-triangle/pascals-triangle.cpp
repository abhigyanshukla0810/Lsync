class Solution {
public:
    vector<vector<int>> generate(int n) {
        if(n==1) return {{1}};
        if(n==2) return {{1},{1,1}};
        vector<vector<int>> ans;
        ans.emplace_back(vector<int>{1});
        vector <int> old = {1,1};
        ans.emplace_back(vector<int>{1,1});
        for(int i = 2; i<n;i++)
        {
            vector <int> New(i+1);
            New[0] = 1;
            New[i] = 1;
            for(int j = 1; j<i;j++)
            {
                New[j] = old[j] + old[j-1];
            }
            old = New;
            ans.emplace_back(New);
        }
        return ans;
        
    }
};