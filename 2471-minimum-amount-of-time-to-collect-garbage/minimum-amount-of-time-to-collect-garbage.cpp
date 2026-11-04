class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int ans = 0, n = garbage.size();
        int lg = -1, lp = -1, lm = -1;
        for(int i = 0; i<n; i++)
        {
            for(char x : garbage[i])
            {
                ans++;
                if(x == 'M') lm =i;
                else if(x == 'P') lp = i;
                else lg = i;
            }
        }
        for(int i = 0; i<n;i++)
        {
            if(i+1<=lm) ans+=travel[i];
            if(i+1<=lg) ans+=travel[i];
            if(i+1<=lp) ans+=travel[i];
        }
        return ans;

    }
};