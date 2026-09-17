class Solution {
public:
    int minSumOfLengths(vector<int>& a, int target) {
        long long sum = 0,tsum = 0,j = 0,i = 0,n = a.size();
        int minlen = INT_MAX;
        vector<int> v(n,INT_MAX);
        int ans = INT_MAX;
        while(j<n){
            tsum += a[j];
            while(tsum>target){
                tsum -= a[i];
                i++;
            }
            if(j>0)
                v[j] = v[j-1];
            if(tsum == target){
                int len = j-i+1;
                if(i>0 && v[i-1] != INT_MAX){
                    ans = min(ans,v[i-1]+len);
                }
                minlen = min(minlen,len);
                v[j] = minlen;
            }
            j++;
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};