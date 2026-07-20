class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        vector <int> v;
        for(int i = 0; i<m;i++){
            for(int j = 0; j<n;j++){
                v.emplace_back(grid[i][j]);
            }
        }
        k = k%(m*n);
        reverse(v.begin(), v.end());
        reverse(v.begin(), v.begin() + k);
        reverse(v.begin() + k, v.end());
        vector <vector<int>> ans(m,vector<int>(n));
        int index = 0;
        for(int i = 0; i<m;i++){
            for(int j = 0; j<n;j++){
                ans[i][j] = v[index++];
            }
        }
        return ans;
    }
};