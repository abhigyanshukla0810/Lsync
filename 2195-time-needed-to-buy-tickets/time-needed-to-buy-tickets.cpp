class Solution {
public:
    int timeRequiredToBuy(vector<int>& t, int k) {
        int n = t.size(), sum = 0;
        if(k==0){
            if(t[0] == 1) return 1;
            for(int x : t){
                if(t[0]<=x) sum+=t[0] - 1;
                else sum+=x;
            }
            return sum+1;
        }
        if(t[k] == 1) return k+1;
        for(int i = 0; i<=k;i++){
            if(t[k] <= t[i]) sum+= t[k];
            else sum+= t[i];
        }
        for(int i = k+1; i<n;i++){
            if(t[k] <= t[i]) sum+= t[k]-1;
            else sum+= t[i];
        }
        return sum;
    }
};