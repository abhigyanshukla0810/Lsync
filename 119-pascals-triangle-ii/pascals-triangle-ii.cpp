class Solution {
public:
    vector<int> getRow(int n) {
        if(n==0) return {1};
        if(n==1) return {1,1};
        n = n+1;
        vector <int> old = {1,1};
        for(int i = 2;i<n+1;i++)
        {
            vector <int> ans(i);
            ans[0] = 1;
            ans[i-1] = 1;
            for(int j = 1; j<i-1;j++)
            {
                ans[j] = old[j] + old[j-1];
            }
            old = ans;
        }
        return old;
    }
};