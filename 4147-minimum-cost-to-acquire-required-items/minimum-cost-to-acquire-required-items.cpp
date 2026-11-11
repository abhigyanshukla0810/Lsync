class Solution {
public:
    long long minimumCost(int c1, int c2, int cb, int n1, int n2) {
        int x = min(n1,n2);
        if(1LL*cb*x > 1LL*c1*x + 1LL*c2*x) return 1LL*c1*n1 + 1LL*c2*n2;
        long long ans = 0;
        ans += 1LL*cb*x;
        n1 -= x;
        n2 -=x;
        if(1LL*max(n1,n2) * cb <= 1LL*c1*n1 + 1LL*c2*n2) return ans+1LL*cb*max(n1,n2);
        else 
        {
            if(n1 > n2)
            {
                ans += 1LL*c1*n1;
            }
            else ans += 1LL*c2*n2;
        }
        return ans;
    }
};