class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int  ans = 0;
        for(auto &c : accounts){
            int sum = 0;
            for(auto &x : c){
                sum +=x;
            }
            ans = max(sum,ans);
        }
        return ans;
    }
};